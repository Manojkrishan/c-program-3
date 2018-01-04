#include<stdio.h>
int main(void)
{
    int n,num=0,temp,rem;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        num=num+(rem*rem*rem);
        n=n/10;
    }
    if(temp==num)
        printf("yes..armstrong no.");
    else 
        printf("no...not an amstong no.");
}

