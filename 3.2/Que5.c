// Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
//            Example of Ramanujan number: 1729
//           12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)

#include <stdio.h>
#include <math.h>

#define LIMIT 100000

int main() {
    int count_sums[LIMIT] = {0};
    int sum_pairs[LIMIT][2] = {0};
    int i, j, sum;

    for (i = 1; i < 47; i++) {
        for (j = i; j < 47; j++) {

            sum = i*i*i + j*j*j;

            if (sum < LIMIT) {

                if (count_sums[sum] == 1) {
                    printf("%4d = %d^3 + %d^3 and %d^3 + %d^3\n",
                           sum,
                           sum_pairs[sum][0], sum_pairs[sum][1],
                           i, j);
                }

                if (count_sums[sum] == 0) {
                    sum_pairs[sum][0] = i;
                    sum_pairs[sum][1] = j;
                }

                count_sums[sum]++;
            }
        }
    }

    return 0;
}

