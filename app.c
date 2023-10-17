#include <stdio.h>
int main()
{
   //find ASCII value of a character entered by the user
   char a;
   printf("enter character: \n");
   scanf("%c",&a);
   //%d display the digital value
   //%c display the actual character

   printf("ASCII value is %c = %d", a, a);
   return 0;
}