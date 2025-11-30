//2.	Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary. 

#include <stdio.h>

struct Employee {
    char name[30];
    float basicPay;
    float grossPay;
};

// Function to compute gross salary
float computeGross(float basic) {
    float DA = 0.52 * basic;   // DA = 52% of basic pay
    return basic + DA;
}

int main() {
    struct Employee emp[100];
    int i, n;

    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basicPay);

        emp[i].grossPay = computeGross(emp[i].basicPay);
    }

    printf("\n--- Employee Gross Salary Report ---\n");
    for (i = 0; i < n; i++) {
        printf("%s : %.2f\n", emp[i].name, emp[i].grossPay);
    }

    return 0;
}