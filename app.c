// c program to find quotient and reminder of two integer
#include <stdio.h>
int main()
{
   int a,b,c;
   printf("enter two integer : \n");
   scanf("%d",&a);
   scanf("%d",&b);
   c = a/b;
   printf("quotient is : %d\n", c);
   c = a%b;
   printf("reminder is: %d", c);
   return 0;
}