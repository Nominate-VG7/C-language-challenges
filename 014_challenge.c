#include <stdio.h>

int main()
{
    // conversion of integer to float
    int number;
    printf("Enter integer number : ");
    scanf(" %d", &number);

    float converted = number;
    printf("integer converted to float : %f",converted);
    return 0;
}