//Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

int global_var = 10;

void my_function() {
    int local_var = 20;

    printf("Inside my_function()\n");
    printf("Accessing global_var: %d\n", global_var);
    printf("Accessing local_var: %d\n", local_var);
}

int main() {
    printf("Inside main()\n");
    printf("Accessing global_var: %d\n", global_var);

    my_function();

    return 0;
}
