#include <stdio.h>
int main()
{
   //c programe to add two integers entered by the user
   int a ,b,c ;
   printf("enter two numbers to add them: \n");
   scanf("%d%d",&a,&b);
   c = a + b;
   printf("sum is: %d",c);
   return 0;
}