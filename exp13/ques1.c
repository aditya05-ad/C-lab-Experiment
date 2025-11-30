//1.	Write a program to define multiple macro to perform arithmetic functions.

#include <stdio.h>
#define add(a,b) ((a)+(b))
#define sub(a,b) ((a)-(b))
#define product(a,b) ((a)*(b))
#define division(a,b) ((a)/(b))
#define modulus(a,b) ((a)%(b))

int main() 
{
   printf("%d\n",add(5,6));
   printf("%d\n",sub(5,6));
   printf("%d\n",product(5,6));
   printf("%d\n",division(5,6));
   printf("%d\n",modulus(5,6));
    return 0;
}