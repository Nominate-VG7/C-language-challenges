#include <stdio.h>

void input_book(char title[], char author[], float *price) {
    printf("Please enter the book title: ");
    fgets(title, 100, stdin);

    printf("Now enter the book's author: ");
    fgets(author, 100, stdin);

    printf("Finally enter the book's price: ");
    scanf("%f", price);
    getchar(); 
}

void print_book(char title[], char author[], float price){
    printf("\n%sis written by %sand is sold for Rs%.2f", title, author, price);
}

int main()
{
    char title[3][100];
    char author[3][100];
    float prices[3]; 

    printf("Welcome to the book store\n\n");

    for(int i = 0; i < 3; i++){
        input_book(title[i], author[i], &prices[i]);
    }

    printf("\nHere are the details of all the books\n");

    for(int i = 0; i < 3; i++){
        print_book(title[i], author[i], prices[i]);
    }

    return 0;
}
