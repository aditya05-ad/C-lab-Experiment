// 1.	Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int andRes = a & b;   
    int orRes = a | b;  
    int notRes = ~a;      

    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", andRes);
    printf("a | b = %d\n", orRes);
    printf("~a = %d\n", notRes);

    return 0;
}