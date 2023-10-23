// c program to swap two numbers
#include <stdio.h>
int main()
{
   int num;
   printf("enter a number:");
   scanf("%d",&num);

   //number completely divisbal by 2 called even otherwise odd
   if(num % 2 == 0)
   {
      printf("number is even %d", num);
   }
   else
   {
      printf("number is odd %d\n", num);
   }
   
   return 0;
}