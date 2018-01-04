#include<stdio.h>
int main(void)
{
    int n,i;
    long fact=1;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("%ld",fact);
}
  
