#include <stdio.h>
#include <string.h>

struct Book{
    char title[100];
    char author[100];
    float price;
};

typedef struct Book Book;


void print_book(Book *book){ 
    printf("\n%sis written by %s and is sold for Rs%.2f", book->title, book->author, book->price);
}

int main()
{
    
    printf("Welcome to the book store!!\n\n");
    Book books[3] = {
        {.title = "The Selfish Gene", .author = "Richard Dawkins", .price = 499.9},
        {.title = "Why We Sleep", .author = "Mathew Dawkins", .price = 399.9},
        {.title = "Doglapan", .author = "Ashneer Grover", .price = 499.9}, // these are all designated initializers

    };

    
    printf("\nHere are the details of all the books\n");
    for(int i=0; i<3; i++) {
        print_book(&books[i]);
    }
    return 0;
}