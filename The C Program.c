#include <stdio.h>

void fn1()
{
int a,b;
char c;
float d;
char e[200];
const double PI = 3.14;
int f=a+b;
int g=a-b;
int h=a*b;
int i=a/b;
int j=a%b;
//% is modulus operator

int k = a+b-f;
int l = a+b*k;

float average;

//here a+b goes first then (a+b)*k
//* / % goes first from left to right then + - goes in maths, goodluck.

printf("\n First type any two numbers\n");
scanf("%d %d", &a, &b);
printf("\n The value of int a is %d and int b is %d\n", a,b);

printf("\n Now type any letter from the keyboard : \n");
getchar(c);
printf("\n The char c is now :");
putchar(c);
printf("\n");

printf("\n Type any decimal number as input \n");
scanf("%f",&d);
printf("\n The float d is now %f \n", d);

printf("\n Now type the paragraph you like \n");
fgets(e);
printf("\n The char array, you typed is %s \n", e);

printf("\n The addition f is now %d \n", &f);

printf("\n The subtraction g is now %d \n", &g);

printf("\n The multiplication h is now %d \n", &h);

printf("\n The division i is now %d \n", &i);

printf("\n The modulus j is now %d \n", &j);

average = (float) l/k;
int ++average;
printf("%d", &average);

}



void fn0()
{
printf(" The size of signed   int is             : %ld  bytes \n",sizeof(int));
  
  printf("\n The size of unsigned int is         : %lu bytes \n",sizeof(int));
  
  printf("\n The size of unsigned short int is   : %lu bytes \n", sizeof(short int));
  
  printf("\n The size of unsigend long int is    : %lu bytes \n", sizeof(long int));
  
  /*
   %lu      - unsigned int 
   %ld      - signed int
   %c       - char
   %o       - octal
   %s       - string
   %x       - hexadecimal
   %X       - also hexadecimal but Alphabetical char in UPPERCASE
   %e or %E - Scientific Notation
   %g       - decimal floating point number
   %p       - prints the address in hexadecimal form
   
   %f       - floating point number 6 numbers after the dot(.)
   %.2f     - prints only TWO Decimals after the point value
   
   %8d      - prints the number after the EIGHT White Spaces in the O/P
   %-8d     - prints the number left algined as it reduces the EIGHT White spaces before the O/P
   
   
   lets say int = 8
   and %8d is used in printf() 
   then output will be 00000008[SEVEN ZEROS AND 8]
   
  */
  
  printf("\n The size of unsigned char is        : %lu bytes \n", sizeof(char));
  
  //The char is always unsigned by default
  
  printf("\n The size of unsigned short is       : %lu bytes \n", sizeof(short));
  
  printf("\n The size of unsigned float is       : %lu bytes \n", sizeof(float));
  
  printf("\n The size of unsigned double is      : %lu bytes  \n", sizeof(double));
  
  printf("\n The size of unsigned long double is : %lu bytes \n", sizeof(long double));
  }
  
int main()
{
fn1();
  fn0();
  
  return 0;
  }
