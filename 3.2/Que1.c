//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include <stdio.h>

int main() {
    int a;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number:\n");
        scanf("%d", &a);

        if (a > 0) {
            positive++;
        }
        else if (a < 0) {
            negative++;
        }
        else {
            zero++;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}
