// 3.	Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. 

#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Title: ");
    scanf("%s", b1.title);

    printf("Enter Author: ");
    scanf("%s", b1.author);

    printf("Enter Price: ");
    scanf("%f", &b1.price);

    printBook(b1);

    return 0;
}