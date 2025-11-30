//3.	Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num. 

#include <stdio.h>

int FIBO(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return FIBO(n - 1) + FIBO(n - 2);
}
int main() {
    int num;
    do {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num < 0)
            printf("Invalid input! Please enter a non-negative number.\n");
    } while (num < 0);
    for (int i = 0; i < num; i++)
        printf("%d ", FIBO(i));
    return 0;
}