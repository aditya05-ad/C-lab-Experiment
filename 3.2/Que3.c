// WAP to generate the following set of output.
// a.  
// 1
// 2 3
// 4 5 6
// b.  
// 1
// 1 1
// 1 2 1
// 1 3 3 1
//                                                                 1 4 6 4 1


#include <stdio.h>

int main() {
    int num = 1;

    for (int i = 1; i <= 9; i++) {

        for (int k = 1; k <= 9 - i; k++) {
            printf("  ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
