#include <stdio.h>

int main()
{
    //evaluating even or odd number using ternary operator
    
    int num;
    printf("Enter number : ");
    scanf(" %d", &num);

    num % 2 == 0 ? printf("Number is Even") : printf("Number is Odd");
    return 9;
}