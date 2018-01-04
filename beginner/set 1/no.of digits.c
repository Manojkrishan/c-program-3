#include<stdio.h>
int main(void)
{
    int num,count=0;
    scanf("%d",&num);
    if(num==0)
        printf("%d",count);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("%d",count);
}
