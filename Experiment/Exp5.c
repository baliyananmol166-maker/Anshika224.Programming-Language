#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], rt[n];
    int wt[n], tat[n], completed = 0;
    int current_time = 0, min_index;
    int total_wt = 0, total_tat = 0;
    int min_remaining;

    // Input
    for(int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nEnter Arrival Time and Burst Time for Process %d: ", pid[i]);
        scanf("%d %d", &at[i], &bt[i]);
        rt[i] = bt[i];  // Remaining time = Burst time
    }

    // SRTF Logic
    while(completed != n) {
        min_remaining = INT_MAX;
        min_index = -1;

        for(int i = 0; i < n; i++) {
            if(at[i] <= current_time && rt[i] > 0 && rt[i] < min_remaining) {
                min_remaining = rt[i];
                min_index = i;
            }
        }

        if(min_index == -1) {
            current_time++;
        } else {
            rt[min_index]--;
            current_time++;

            if(rt[min_index] == 0) {
                completed++;
                int finish_time = current_time;

                wt[min_index] = finish_time - bt[min_index] - at[min_index];
                if(wt[min_index] < 0)
                    wt[min_index] = 0;

                tat[min_index] = bt[min_index] + wt[min_index];

                total_wt += wt[min_index];
                total_tat += tat[min_index];
            }
        }
    }

    // Output
    printf("\nPID\tAT\tBT\tWT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n",
               pid[i], at[i], bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f",
           (float)total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n",
           (float)total_tat / n);

    return 0;
}
