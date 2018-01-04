#include <stdio.h>

int main(void)
{
 int n,a,d,l,sum=0;
 scanf("%d %d %d",&n,&a,&d);
//N=((l-a)/d )+1
 l=(n*d)+a-1; 
 sum=((a+l)*n)/2;
 printf("sum=%d",sum);
 return 0;
}
