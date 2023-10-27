#include <stdio.h>
int main()
{
  int array[5];
  printf("enter integer array:\n");
  for(int i =0; i<5; ++i)
  {
    scanf("%d", &array[i]);
  }

  //display the array
  printf("display the array\n");
  for(int i =0 ; i<5; ++i)
  {
    printf("%d\n",array[i]);
  }
 return 0;
}