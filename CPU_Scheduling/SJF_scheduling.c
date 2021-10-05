#include <stdio.h>
void main()
{
  int n, i, j;
  printf("enter the no of process :");
  scanf("%d", &n);
  int a[n], b[n], wt[n], tat[n], ct[n], arrival[n];
  printf("enter the burst time");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &b[i]);
  }
  printf("enter the arrival time :");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arrival[i]);
  }

  for (i = 0; i < n; i++)
  {
    a[i] = i + 1;
  }
  int temp, temp2, temp1;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arrival[j] > arrival[j + 1])
      {
        temp = arrival[j];
        arrival[j] = arrival[j + 1];
        arrival[j + 1] = temp;
        temp1 = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp1;
        temp2 = b[j];
        b[j] = b[j + 1];
        b[j + 1] = temp2;
      }
    }
  }
  int bti = 0, min, k = 1;
  for (j = 0; j < n; j++)
  {
    bti = bti + b[j];
    min = b[k];
    for (i = k; i < n; i++)
    {
      if (bti >= arrival[i] && b[i] < min)
      {
        temp = a[k];
        a[k] = a[i];
        a[i] = temp;
        temp = arrival[k];
        arrival[k] = arrival[i];
        arrival[i] = temp;
        temp = b[k];
        b[k] = b[i];
        b[i] = temp;
      }
    }
    k++;
  }

  i = 0;
  if (arrival[i] == 0)
    ct[0] = b[0];
  else
    ct[0] = b[0] + arrival[0];

  for (i = 1; i < n; i++)
    ct[i] = ct[i - 1] + b[i];
  for (i = 0; i < n; i++)
    tat[i] = ct[i] - arrival[i];
  for (i = 0, j = 0; i < n; i++, j++)
    wt[i] = tat[i] - b[j];
  printf("\nprocess\tarrt\tbt\tct\twt\ttat");
  for (i = 0; i < n; i++)
  {
    printf("\np%d\t%d\t%d\t%d\t%d\t%d", a[i], arrival[i], b[i], ct[i], wt[i], tat[i]);
  }
  float totwat = 0;
  float tottat = 0;
  for (i = 0; i < n; i++)
  {
    totwat = totwat + wt[i];
    tottat = tottat + tat[i];
  }
  printf("\n Average waiting time of sjf =%f", totwat / n);
  printf("\n Average  turn around time of sjf =%f", tottat / n);
  printf("\n");
}
