#include<stdio.h>
int main()
{
  int s,np,ms,i,j,k=0,l,pf=0,f=0,index;
  printf("Enter the number of pages : ");
  scanf("%d",&np);
  printf("Enter the size of cache memory : ");
  scanf("%d",&ms);
  int n[np],a[ms],b[ms];
  printf("Enter the page number of each page : ");
  for(i=0;i<np;i++)
  {
   scanf("%d",&n[i]);
  }
  for(i=0;i<ms;i++)
  {
   b[i]=0;
   a[i]=0;
  }
  for(i=0;i<ms;i++)
  {
    b[i]=1;
  } 
  for(i=0;i<np;i++)
  {
   f=1;
   for(j=0;j<ms;j++)
   {
    if(n[i]==a[j])
    {
     f=0;
     b[j]=b[j]+1;
     break;
    }
   }
 if(f==1)
 {
  l=b[0];
  printf("Value of l = %d\n",l);
  index=0;
 for(k=0;k<ms;k++)
 {
  if(b[k]<=l)
  {
    l=b[k];
    index=k;
  }
 }
  printf("Value of l = %d\n",l);
  a[index]=n[i];
  b[index]=1;
  pf++;
 }
 for(k=0;k<ms;k++)
 {
   printf("Value of k=%d b[k] = %d\n",k,b[k]);
 }
}
for(i=0;i<ms;i++)
{
  printf("%d\t",a[i]);
}
printf("\nNumber of page faults : ");
printf("%d",pf);
printf("\n");
return 0;
}


