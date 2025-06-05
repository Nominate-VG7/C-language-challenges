#include <stdio.h>

typedef struct Student
{
    char id[10];
    char name[50];
    char year[10];
    char grade;

} Student;

void increase_grade(Student *);
void decrease_grade(Student *);
void print_student(Student *);

int main()
{
    Student stu1 = {.id = "CS001", .name = "Ravi", .year = "First", .grade = 'B'};
    Student stu2 = {.id = "CS002", .name = "Ram", .year = "Second", .grade = 'A'};
    Student stu3 = {.id = "CS003", .name = "Sameer", .year = "Third", .grade = 'F'};

    printf("Welcome to our College\n\n");
    printf("Here are the student details: \n");
    print_student(&stu1);
    print_student(&stu2);
    print_student(&stu3);

    decrease_grade(&stu1);
    increase_grade(&stu3);

    printf("After changes\n");
    print_student(&stu1);
    print_student(&stu2);
    print_student(&stu3);
    return 0;
}

void increase_grade(Student *stu)
{
    stu->grade--;
}

void decrease_grade(Student *stu)
{
    stu->grade++;
}

void print_student(Student *stu)
{
    printf("The student with %s name has id: %s and studies in %s year has achieved %c grade\n\n", stu->name, stu->id, stu->year, stu->grade);
}