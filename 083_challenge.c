#include <stdio.h>

int main()
{
    char name[25];
    printf("Welcome to the showing use of fgets and puts\n");
    printf("Enter your name here : ");
    fgets(name, sizeof(name), stdin);

    printf("\nYour entered name is : ");
    puts(name);
    return 0;
}