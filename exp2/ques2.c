// 2.	WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

# include <stdio.h>

int main () {
    float celsius ,f;
    printf ("Enter temperature in celsius:\n");
    scanf ("%f",&celsius);
    f=(celsius*9/5)+32;
    printf ("Temperature in Fahrenheit is = %.2f\n",f);
    return 0;
}