//According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;

    printf("Enter length of 1st rectangle: ");
    scanf("%d", &l1);
    printf("Enter breadth of 1st rectangle: ");
    scanf("%d", &b1);

    printf("Enter length of 2nd rectangle: ");
    scanf("%d", &l2);
    printf("Enter breadth of 2nd rectangle: ");
    scanf("%d", &b2);

    printf("Enter length of 3rd rectangle: ");
    scanf("%d", &l3);
    printf("Enter breadth of 3rd rectangle: ");
    scanf("%d", &b3);

    int per1, per2, per3, largest;

    per1 = 2 * (l1 + b1);
    per2 = 2 * (l2 + b2);
    per3 = 2 * (l3 + b3);

    largest = (per1 > per2 && per1 > per3) ? per1 :
              (per2 > per3) ? per2 : per3;

    printf("Largest perimeter = %d\n", largest);

    return 0;
}
