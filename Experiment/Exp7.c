#include <stdio.h>

int main() {
    int n, tq;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], rt[n];
    int wt[n], tat[n];
    int current_time = 0, completed = 0;
    int total_wt = 0, total_tat = 0;

    // Input
    for(int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nEnter Arrival Time and Burst Time for Process %d: ", pid[i]);
        scanf("%d %d", &at[i], &bt[i]);
        rt[i] = bt[i];   // Remaining time
    }

    printf("\nEnter Time Quantum: ");
    scanf("%d", &tq);

    while(completed < n) {
        int idle = 1;

        for(int i = 0; i < n; i++) {
            if(at[i] <= current_time && rt[i] > 0) {
                idle = 0;

                if(rt[i] > tq) {
                    current_time += tq;
                    rt[i] -= tq;
                } else {
                    current_time += rt[i];

                    wt[i] = current_time - bt[i] - at[i];
                    if(wt[i] < 0)
                        wt[i] = 0;

                    tat[i] = bt[i] + wt[i];

                    total_wt += wt[i];
                    total_tat += tat[i];

                    rt[i] = 0;
                    completed++;
                }
            }
        }

        if(idle)
            current_time++;
    }

    // Output
    printf("\nPID\tAT\tBT\tWT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n",
               pid[i], at[i], bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", (float)total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", (float)total_tat / n);

    return 0;
}
