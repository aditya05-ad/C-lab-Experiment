//1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. 


#include <stdio.h>
int FACT(int n) {
    if (n == 0)
        return 1;
    else
        return n * FACT(n - 1);
}
int fact(int n) {
    int product = 1;
    for (int i = 2; i <= n; i++)
        product *= i;
    return product;
}
int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}
int main() {
    int n[5], r[5];
    for (int i = 0; i < 5; i++) {
        do {
            printf("Enter n and r (n >= r >= 0) for case %d: ", i + 1);
            scanf("%d %d", &n[i], &r[i]);
        } while (n[i] < 0 || r[i] < 0 || r[i] > n[i]);
    }
    printf("\nn   r   nCr\n");
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d  %2d  %3d\n", n[i], r[i], ncr(n[i], r[i]));
    }
    return 0;
}