#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 int sq,a,i,j,r=0,av;
 printf("Enter the size of disk queue : \n");
 scanf("%d",&sq);
 int dq[sq];
 printf("Enter the disk queue : \n");
 for(i=0;i<sq;i++)
 {
   scanf("%d",&dq[i]);
 }
 printf("Enter the initial disk head : \n");
 scanf("%d",&a);
 r=dq[0]-a;
 for(i=1;i<sq;i++)
 {
   r=r+(abs(dq[i]-dq[i-1]));
 }
 printf("No. of cylinders scanned : %d",r);
 av=r/sq;
 printf("\nAverage head move : %d",av);
 printf("\n");
 return 0;
}
