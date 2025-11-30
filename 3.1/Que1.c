//WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>

int main() {
    int l1, l2, l3;

    printf("Enter length 1 of triangle: ");
    scanf("%d", &l1);

    printf("Enter length 2 of triangle: ");
    scanf("%d", &l2);

    printf("Enter length 3 of triangle: ");
    scanf("%d", &l3);

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        printf("It is a valid triangle.\n");

        if (l1 == l2 && l2 == l3) {
            printf("It is an equilateral triangle.\n");
        }

        else if ((l1*l1 + l2*l2 == l3*l3) ||
                 (l1*l1 + l3*l3 == l2*l2) ||
                 (l2*l2 + l3*l3 == l1*l1)) {
            printf("It is a right triangle.\n");
        }

        else if (l1 == l2 || l2 == l3 || l1 == l3) {
            printf("It is an isosceles triangle.\n");
        }

        else {
            printf("It is a scalene triangle.\n");
        }

    } else {
        printf("It is not a valid triangle.\n");
    }

    return 0;
}
