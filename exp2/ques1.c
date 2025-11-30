// 1.	WAP a C program to calculate the area and perimeter of a rectangle based on its length and width

# include <stdio.h>

int main () {
    float a,b;
    float area,perimeter;
    printf ("Enter the value:\n");
    scanf ("%f",&a);
    printf ("Enter the value:\n");
    scanf ("%f",&b);
    area=a*b;
    perimeter = 2*(a+b);
    printf ("Area = %f\n", area);
    printf ("Perimeter=%f\n",perimeter);
    return 0;
}