#include <stdio.h>

int main()
{
printf(" The size of signed   int is             : %ld  bytes \n",sizeof(int));
  
  printf("\n The size of unsigned int is         : %lu bytes \n",sizeof(int));
  
  printf("\n The size of unsigned short int is   : %lu bytes \n", sizeof(short int));
  
  printf("\n The size of unsigend long int is    : %lu bytes \n", sizeof(long int));
  /*
   %lu - unsigned int 
   %ld - signed int
   %c  - char
   %o  - octal
   %s  - string
   %x  - hexadecimal
   %X  - also hexadecimal but Alphabetical char in UPPERCASE
   %e or %E - Scientific Notation
   %g  - decimal floating point number
   %p  - prints the address in hexadecimal form
   
   %f  - floating point number 6 numbers after the dot(.)
   %.2f - prints only TWO Decimals after the point value
   
   %8d - prints the number after the EIGHT White Spaces in the O/P
   %-8d - prints the number left algined as it reduces the EIGHT White spaces before the O/P
   
   
   lets say int =8
   and %8d is used in printf() 
   then output will be 00000008[SEVEN ZEROS AND 8]
   
  */
  
  printf("\n The size of unsigned char is        : %lu bytes \n", sizeof(char));
  
  //The char is always unsigned by default
  
  printf("\n The size of unsigned short is       : %lu bytes \n", sizeof(short));
  
  printf("\n The size of unsigned float is       : %lu bytes \n", sizeof(float));
  
  printf("\n The size of unsigned double is      : %lu bytes  \n", sizeof(double));
  
  printf("\n The size of unsigned long double is : %lu bytes \n", sizeof(long double));
  return 0;
  }
