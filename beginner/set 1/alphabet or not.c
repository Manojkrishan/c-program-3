#include<stdio.h>
int main(void)
{
char a;
scanf("%c",a);
if(((a>='a')||(a>='A'))&&((a<='z')||(a<='Z')))
printf(“alphabet”);
else
printf("not an alphabet");
return 0;
}
