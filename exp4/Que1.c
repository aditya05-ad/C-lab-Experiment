//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int global_variable = 100;

void modify_global() {
    global_variable = 200;
    printf("Inside modify_global(): global_variable = %d\n", global_variable);
}

void accessGlobal() {
    printf("Inside accessGlobal(): global_variable = %d\n", global_variable);
}

int main() {
    printf("Inside main(): Initial global_variable = %d\n", global_variable);

    modify_global();
    printf("Inside main(): global_variable after modify_global() call = %d\n", global_variable);

    accessGlobal();

    global_variable = 30;
    printf("Inside main(): global_variable after direct modification = %d\n", global_variable);

    return 0;
}
