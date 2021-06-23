#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no: of processes:");
    scanf("%d",&n);
    int a[n],bt[n],tat[n],wt[n],ct[n],arr[n];

    printf("Enter the Burst time of process:");
    for(i=0; i<n; i++)
        scanf("%d",&bt[i]);

    printf("Enter the Arrival time of process:");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    

    for(i=0; i<n; i++)
        a[i] = i + 1;
    ct[0] = bt[0];
    
    for(i=1;i<n;i++)
        ct[i]=ct[i-1]+bt[i];

    for(i=0; i<n; i++)
        tat[i] = arr[i] - ct[i];

    for(i=0; i<n; i++)
        wt[i] = tat[i] - bt[i];

    printf("\nProcess\tBT\tARR\tCT\tTAT\tWT");
    for(i=0;i<n;i++)
    {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d",a[i],bt[i],arr[i],ct[i],tat[i],wt[i]);
    }
    printf("\n");
    return 0;
}