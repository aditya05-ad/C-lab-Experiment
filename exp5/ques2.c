//2.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include <stdio.h>
int main() {
    int n, i, pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 0) pos++;
        else neg++;
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("\nPositive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    return 0;
}