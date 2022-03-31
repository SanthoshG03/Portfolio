#include <stdio.h>

int main()
{
printf("The bytes value for int is: %ld  \n",sizeof(int));
printf("By default signed integer is used & its bytes value are ranged from -32.768 to 32,767\n");
  printf("\nThe bytes value for unsigned int is : %lu \n",sizeof(int));
  printf("unsigned int is used to get only the positive values as result and \"(PERCENTAGE-lu)\" is used for it\n");
  printf("\n The unsigned int bytes value are range from 0 to 65,535\n");
  return 0;
  }
