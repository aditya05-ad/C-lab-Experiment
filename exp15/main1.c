#include <stdio.h>
#include "arith.h"

int main () {
    int x=20, y=5;
    printf("Addition: %d\n",add(x,y));
    printf("Subtraction: %d\n",sub(x,y));
    printf("Multiplication: %d\n",mul(x,y));
    printf("Division: %d\n",divi(x,y));
}