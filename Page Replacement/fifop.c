#include<stdio.h>
int main()
{
  int np,ms,i,j,k=0,pf=0,f=0;
  printf("Enter the number of pages : ");
  scanf("%d",&np);
  printf("Enter the size of cache memory : ");
  scanf("%d",&ms);
  int n[np],a[ms];
  printf("Enter the page number of each page : ");
  for(i=0;i<np;i++)
  {
   scanf("%d",&n[i]);
  }
  for(i=0;i<np;i++)
  {
   for(j=0;j<ms;j++)
   {
    if(n[i]==a[j])
    {
     f=0;
     break;
    }
    else
    {
      f=1;
      continue;
    }
   }
 if(k>=ms)
 k = 0;
  if(f==1)
  {
    a[k]=n[i];
    k++;
    pf++;
    continue;
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
