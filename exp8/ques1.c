//1.	Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    int i = 5;
    float f = 3.14f;
    char c = 'A';
    int *ptr_i = &i;
    float *ptr_f = &f;
    char *ptr_c = &c;
    printf("Integer pointer: Address = %p, Value = %d\n", (void*)ptr_i, *ptr_i);
    printf("Float pointer  : Address = %p, Value = %.2f\n", (void*)ptr_f, *ptr_f);
    printf("Char pointer   : Address = %p, Value = %c\n", (void*)ptr_c, *ptr_c);
    return 0;
}