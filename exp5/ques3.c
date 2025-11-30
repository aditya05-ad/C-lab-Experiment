//3.	WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.

#include <stdio.h>

int main() {
    int n, i, key, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to count: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key) count++;
    printf("Frequency of %d = %d\n", key, count);
    return 0;
}