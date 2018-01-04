#include<stdio.h>
int main(void)
{
    int num,pow,n=1;
    scanf("%d %d",&num,&pow);
    if(pow==0)
        printf("%d",n);
    else
      {
      while(pow!=0)
      {
          n=n*num;
          pow--;
      }
      printf("%d",n);
      }
}      
      
 
