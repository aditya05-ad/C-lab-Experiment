//2.	Open an existing file and read its content character by character, and then close the file.

#include <stdio.h>

int main() {
    FILE *fp;       
    int ch;         

    fp = fopen("file1.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);   
    }

    fclose(fp);

    return 0;
}