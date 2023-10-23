// c program to swap two numbers
#include <stdio.h>
int main()
{
   int num1,num2,num3;
   printf("enter a three numbers:");
   scanf("%d%d%d",&num1,&num2,&num3);

   if(num1>num2 && num1>num3)
   {
      printf("num1 is large number %d",num1);
   }
   else if(num2>num1 && num2>num3)
   {
    printf("num is greater %d",num2);
   }
   else if(num3>num1 && num3 > num2)
   {
      printf("num3 is greater %d",num3);
   }
   else
   {
      printf("number is equal\n");
   }


   return 0;
}