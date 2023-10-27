//programe to find the average of n number using array
#include <stdio.h>
int main()
{
 int marks[10],i,n,sum=0;
 double average;

 printf("number of element");
 scanf("%d",&n);

 for(i=0;i<n;++i)
 {
  printf("number entered%d: ",i+1);
  scanf("%d",&marks[i]);
  sum += marks[i];
  
 }
//find the average
//convert sum to double
average = (double) sum/n;
printf("average is %.2lf", average);
 return 0;
}