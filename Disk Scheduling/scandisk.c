#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  int n,dh,i,k,j=0,m=0,temp,l,y=0,p=0;
  float r=0,av;
  printf("Enter the size of disk queue : \n");
  scanf("%d",&n);
  int dq[n],b[n],c[n];
  printf("Enter the disk queue : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&dq[i]);
    b[i]=0;
    c[i]=0;
  }
  printf("Enter the initial disk head : \n");
  scanf("%d",&dh);
  printf("Enter the limit of disk : \n");
  scanf("%d",&l);
  for(k=0;k<n;k++)
  {
   if(dh<=dq[k])
   {
    b[j]=dq[k];
    j++;
   }
  else
  {
   c[m]=dq[k];
   m++;
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(b[j]<b[i])
   {
    temp=b[j];
    b[j]=b[i];
    b[i]=temp;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  { 
   if(c[j]<c[i])
   {
    temp=c[j];
    c[j]=c[i];
    c[i]=temp;
   }
  }
 }
for(i=0;i<n;i++)
{
  printf("%d ",b[i]);
}
printf("\n");
for(i=0;i<n;i++)
{ 
  printf("%d ",c[i]);
}
for(i=0;i<n;i++)
{
  if(b[i]==0)
   continue;
  else
  {
   p=i;
   y++;
  if(y==1)
   r = r + abs(b[p]-dh);
  if(i==(n-1))
   r = r + abs(l-b[p]);
  else
   r = r + abs(b[p+1]-b[p]);
  continue;
  }
}
y=0;
for(i=0;i<n;i++)
{
  if(c[i]==0)
   continue;
  else
  {
    p=i;
    if(c[p+1]==0)
     r = r + abs(l-c[p]);
    else
     r = r + abs(c[p+1]-c[p]);
    continue;
  }
}
 printf("No. of cylinders scanned : %f",r);
 av=r/n;
 printf("\nAverage head move : %f",av);
 printf("\n");
 return 0;
}
