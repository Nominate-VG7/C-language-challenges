#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

typedef struct Book Book;

typedef struct Student {
    char id[10];
    char name[50];
    char year[10];
    char grade;
    int books_borrowed;
    Book borrowed_books[3];
} Student;

void print_student(Student *);
void print_book(Book *);

int main() {
    Student stu1 = {
        .id = "CS001",
        .name = "Ravi",
        .year = "First",
        .grade = 'B',
        .books_borrowed = 2, 
        .borrowed_books = {
            {.title = "The Selfish Gene", .author = "Richard Dawkins", .price = 499.9},
            {.title = "Why We Sleep", .author = "Mathew Dawkins", .price = 399.9}
        }
    };

    printf("Welcome to our College\n\n");
    printf("Here are the student details: \n");
    print_student(&stu1);

    return 0;
}

void print_student(Student *stu) {
    printf("The student with name %s has id: %s, studies in %s year, and has achieved grade %c\n\n",
           stu->name, stu->id, stu->year, stu->grade);
    printf("Here are the books borrowed:");
    for (int i = 0; i < stu->books_borrowed; i++) {
        print_book(&(stu->borrowed_books[i]));
    }
}

void print_book(Book *book) {
    printf("\n%s is written by %s and is sold for Rs%.2f", book->title, book->author, book->price);
}
