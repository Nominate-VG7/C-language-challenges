#include <stdio.h>

int main()
{
    char day[10];
    char month[10];
    int year;

    printf("Welcome to the formatting date\n");
    printf("Enter Day : ");
    scanf(" %s", &day[0]);
    printf("Enter Month : ");
    scanf(" %s", &month[0]);
    printf("Enter Year : ");
    scanf(" %d", &year);

    printf("Current Day, Month and Year is : %s/%s/%4d", day, month, year);
    return 0;
}