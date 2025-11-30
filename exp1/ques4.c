// 4.	Write a C program to add two numbers, take number from user.

#include <stdio.h>

int main () {
    int a, sum;
    int z;
    printf ("Enter the first value\n");
    scanf ("%d",&a);
    printf ("Enter the second value\n");
    scanf ("%d",&z);
    sum= a+z;
    printf ("%d",sum);
    return 0;
}