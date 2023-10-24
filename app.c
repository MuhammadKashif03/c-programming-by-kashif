#include <stdio.h>
int addNumber(int a , int b); //function prototype

int main()
{
   int sum, num1, num2;

   printf("enter two number: ");
   scanf("%d %d", &num1, &num2);

   sum = addNumber(num1,num2); //call function
   printf("sum is %d", sum);
   return 0;
}

int addNumber(int a , int b)   //funtion statement
{
  int result;
  result = a + b;
  return result;    //return statement
}

