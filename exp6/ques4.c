//4.	Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges. 

#include <stdio.h>

int ISPRIME(int num) {
    if (num == 1) return 0;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0) return 0;
    return 1;
}
int main() {
    int num1, num2;
    printf("Enter the range: ");
    scanf("%d%d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Prime cannot be evaluated for negative numbers.\n");
        return 0;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Prime numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++)
        if (ISPRIME(i)) printf("%d\t", i);
    return 0;
}