#include<stdio.h>
int main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("a is big");
else if(b>c)
printf("b is big");
else
printf("c is big");
return 0;
}
