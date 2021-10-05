#include <stdio.h>
int main()
{
    int n, i, temp, j, k = 0;
    printf("Enter the number of process : ");
    scanf("%d", &n);
    int a[n], bt[n], pt[n], tat[n], wt[n], pta[n], ct[n];
    printf("Enter the Burst time of process : ");
    for (i = 0; i < n; i++)
        scanf("%d", &bt[i]);
    printf("Enter the Priority of process : ");
    for (i = 0; i < n; i++)
        scanf("%d", &pt[i]);
    for (i = 0; i < n; i++)
        a[i] = i + 1;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (pt[i] > pt[j])
            {
                temp = pt[i];
                pt[i] = pt[j];
                pt[j] = temp;
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    ct[0] = bt[0];
    for (i = 1; i < n; i++)
        ct[i] = ct[i - 1] + bt[i];
    for (i = 0; i < n; i++)
        tat[i] = ct[i];
    for (i = 0, j = 0; i < n; i++, j++)
        wt[i] = tat[i] - bt[j];
    printf("\nProcess\tBT\tCT\tTAT\tWT");
    for (i = 0; i < n; i++)
    {
        printf("\nP%d\t%d\t%d\t%d\t%d", a[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("\n");
    return 0;
}
