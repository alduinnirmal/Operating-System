#include<stdio.h>
int main()
{
   int index,s,np,ms,i,j,k,pf=0,f=0;
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
   for(i=0;i<np;i++)
   {
    f=1; 
    for(j=0;j<ms;j++)
    {
      if(n[i]==a[j])
      {
       f=0;
       b[j]=i+1;
       break;
      }
    }
  if(f==1)
  {
    s=b[0];
    index=0;
    for(k=0;k<ms;k++)
    {
     if(b[k]<s)
     {
      s=b[k];
      index=k;
     }
    }
   a[index]=n[i];
   b[index]=i+1;
   pf++;
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

