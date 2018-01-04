#include<stdio.h>
int main(void)
{
    int n,i,mul=1,limit;
    scanf("%d  %d ",&n,&limit);
    for(i=1;i<=limit;i++)
    {
        mul=n*i;
        printf("%d ",mul);
    }
}  
