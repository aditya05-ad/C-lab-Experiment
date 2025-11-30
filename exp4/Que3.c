//Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    int global_to_main = 10;
    printf("Inside main block: global_to_main = %d\n", global_to_main);

    {
        int inner_block_var1 = 20;
        printf("Inside inner block 1: global_to_main = %d, inner_block_var1 = %d\n",
               global_to_main, inner_block_var1);

        {
            int inner_block_var2 = 30;
            printf("Inside inner block 2: global_to_main = %d, inner_block_var1 = %d, inner_block_var2 = %d\n",
                   global_to_main, inner_block_var1, inner_block_var2);
        }
    }

    return 0;
}
