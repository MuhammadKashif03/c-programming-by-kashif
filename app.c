#include <stdio.h>
int main()
{

    //working of assignment operators
    int a =5, c;

    //assignment operator
    c=a;
    printf("c is : %d", c);  // c is 5

    c +=a;
    printf("c is : %d", c); // c is 10

    c-=a;
    printf("c is : %d", c); // c is 5

    c*=a;
    printf("c is : %d", c); // c is 25

    c/=a;
    printf("c is : %d", c); // c is 5

    c%=a;
    printf("c is: %d", c); // c is 0

    return 0;

}