//3.	Open a file, read its content line by line, and display each line on the console.

#include <stdio.h>

int main() {
    FILE *fp;            
    char buffer[200];    

    fp = fopen("file1.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}