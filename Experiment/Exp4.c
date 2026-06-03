#include <stdio.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], priority[n];
    int wt[n], tat[n], completed[n];
    int current_time = 0, done = 0;
    int total_wt = 0, total_tat = 0;

    // Input
    for(int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nEnter Arrival Time, Burst Time and Priority for Process %d: ", pid[i]);
        scanf("%d %d %d", &at[i], &bt[i], &priority[i]);
        completed[i] = 0;
    }

    // Scheduling
    while(done < n) {
        int highest_priority = 9999;
        int index = -1;

        for(int i = 0; i < n; i++) {
            if(at[i] <= current_time && completed[i] == 0) {
                if(priority[i] < highest_priority) {
                    highest_priority = priority[i];
                    index = i;
                }
            }
        }

        if(index == -1) {
            current_time++;
        } else {
            wt[index] = current_time - at[index];
            if(wt[index] < 0)
                wt[index] = 0;

            current_time += bt[index];
            tat[index] = wt[index] + bt[index];

            total_wt += wt[index];
            total_tat += tat[index];

            completed[index] = 1;
            done++;
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
