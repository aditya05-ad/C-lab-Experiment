//2.	Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.

#include <stdio.h>

int main() {
    int a[] = {10, 20};
    float b[] = {1.1f, 2.2f};
    char c[] = {'X', 'Y'};
    int *p1 = a;
    float *p2 = b;
    char *p3 = c;
    printf("%p %d\n", (void*)p1, *p1);
    p1++;
    printf("%p %d\n", (void*)p1, *p1);
    
    printf("%p %.1f\n", (void*)p2, *p2);
    p2++;
    printf("%p %.1f\n", (void*)p2, *p2);

    printf("%p %c\n", (void*)p3, *p3);
    p3++;
    printf("%p %c\n", (void*)p3, *p3);

    return 0;
}