#include <stdio.h>

int main()
{
    // program to identify minimum of two numbers
    
    int first, second;
    printf("Enter first number : ");
    scanf(" %d", &first);

    printf("Enter second number : ");
    scanf(" %d", &second);

    int min = first < second ? first : second;
    printf("Minimum number is : %d", min);
    return 0;
}