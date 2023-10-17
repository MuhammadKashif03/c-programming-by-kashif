// c program to swap two numbers
#include <stdio.h>
int main()
{
   int a=5,b=3,c;
   printf("before swap a is %d and b is %d\n",a,b);
   c = a;
   a = b;
   b = c;

   printf("after swap a is :%d and b is %d\n",a,b);
   return 0;
}