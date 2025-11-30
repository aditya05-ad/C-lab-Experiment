//1.	Write a program to create a new file and write text into it.

#include <stdio.h>

int main() {
    FILE *fp;   
    char text[200];

    char filename[100];
    printf("Enter filename to create: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    getchar();

    printf("Enter text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File created successfully! Data written to %s\n", filename);

    return 0;
}