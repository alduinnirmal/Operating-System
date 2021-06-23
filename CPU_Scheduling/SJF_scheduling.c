#include<stdio.h>
int main()
{
    int n,i,temp,j,k=0;
    printf("Enter the number of process : ");
    scanf("%d",&n);
    int bt[n],tat[n],wt[n],a[n],ct[n],arr[n];
    printf("Enter the Burst time of process : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the Arrival time of process : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        a[i]=i+1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
        ct[0]=bt[0];
    for(i=1;i<n;i++)
        ct[i]=ct[i-1]+bt[i];
    for(i=0;i<n;i++)
        tat[i]=ct[i];
    for(i=0,j=0;i<n;i++,j++)
        wt[i]=tat[i]-bt[j];
    printf("\nProcess\tBT\tARR\tCT\tTAT\tWT");
    for(i=0;i<n;i++)
    {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d",a[i],bt[i],arr[i],ct[i],tat[i],wt[i]);
    }
    printf("\n");
}   