//WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.

#include <stdio.h>

int main() {
    int year, total_days = 0, day, i;

    printf("Enter year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            total_days = total_days + 366;
        }
        else {
            total_days = total_days + 365;
        }
    }

    day = total_days % 7;

    if (day == 0)
        printf("Monday");
    else if (day == 1)
        printf("Tuesday");
    else if (day == 2)
        printf("Wednesday");
    else if (day == 3)
        printf("Thursday");
    else if (day == 4)
        printf("Friday");
    else if (day == 5)
        printf("Saturday");
    else if (day == 6)
        printf("Sunday");

    return 0;
}
