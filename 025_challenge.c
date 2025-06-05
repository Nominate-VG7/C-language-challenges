#include <stdio.h>

int main()
{
    // program to verify leap year or not

    int year;
    printf("Enter year : ");
    scanf(" %d", &year);

    if((year%4 == 0) && (year%100 !=0) || (year%400 == 0)) {
        printf("Year is leap year\n");
    } 
    else{
        printf("Not a leap year");
    }
    return 0;
}