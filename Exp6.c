#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], priority[n];
    int rt[n], wt[n], tat[n];
    int completed = 0, current_time = 0;
    int total_wt = 0, total_tat = 0;

    // Input
    for(int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nEnter Arrival Time, Burst Time and Priority for Process %d: ", pid[i]);
        scanf("%d %d %d", &at[i], &bt[i], &priority[i]);
        rt[i] = bt[i];  // Remaining time
    }

    // Scheduling
    while(completed < n) {
        int highest_priority = INT_MAX;
        int index = -1;

        // Find process with highest priority at current time
        for(int i = 0; i < n; i++) {
            if(at[i] <= current_time && rt[i] > 0) {
                if(priority[i] < highest_priority) {
                    highest_priority = priority[i];
                    index = i;
                }
            }
        }

        if(index == -1) {
            current_time++;
        } else {
            rt[index]--;
            current_time++;

            // If process completes
            if(rt[index] == 0) {
                completed++;
                int finish_time = current_time;

                wt[index] = finish_time - bt[index] - at[index];
                if(wt[index] < 0)
                    wt[index] = 0;

                tat[index] = bt[index] + wt[index];

                total_wt += wt[index];
                total_tat += tat[index];
            }
        }
    }

    // Output
    printf("\nPID\tAT\tBT\tPriority\tWT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t%d\n",
               pid[i], at[i], bt[i], priority[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", (float)total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", (float)total_tat / n);

    return 0;
}
