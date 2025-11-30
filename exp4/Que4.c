//Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void counterFunction() {
    static int callcount = 0;
    callcount++;
    printf("Function called %d times.\n", callcount);
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}
