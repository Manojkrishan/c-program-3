 #include<stdio.h>

int main(void)
{
   int i,j,num,sum,flag=0;
   scanf("%d",&num);
   for(i=0;i<=9;i++)
     {
         for(j=0;j<=9;j++)
         {   
         	 sum=0;
             sum=i+j;
             if(sum==num)
             {
               printf("%d",i);
	             printf("%d",j);
               break;
             }
         }
     }
    
     return 0;
}
