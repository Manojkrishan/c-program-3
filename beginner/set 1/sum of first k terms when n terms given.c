#include<stdio.h>
int main(void)
{
  int n,i,k,sum=0,a[100];
  scanf("%d %d\n",&n,&k);
 for(i=0;i<n;i++) 
     scanf("%d",&a[i]);
 for(i=0;i<k;i++)
     sum=sum+a[i];
 printf("%d",sum);
}
