// 2.	Write a program to apply left shift and right shift operator.

#include <stdio.h>

int main() {
    int a, n;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter shift amount: ");
    scanf("%d", &n);

    int left = a << n;   
    int right = a >> n;  

    printf("Original number = %d\n", a);
    printf("a << %d = %d\n", n, left);
    printf("a >> %d = %d\n", n, right);

    return 0;
}