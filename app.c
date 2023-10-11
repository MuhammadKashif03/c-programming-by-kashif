#include <stdio.h>
int main()
{ 
//Now user will enter float and double

float num1;
double num2;

printf("enter float number :");
scanf("%f",&num1);
printf("enter double :");
scanf("%lf",&num2);

printf("float number : %f\n",num1);
printf("double number : %lf",num2);


return 0;
}