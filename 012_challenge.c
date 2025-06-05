#include <stdio.h>

int main()
{
    // program to swap two integers input from user

    int a,b,temp;

    printf("Enter first integer : ");
    scanf(" %d", &a);

    printf("Enter second integer : ");
    scanf(" %d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nFirst integer : %d\n", a);
    printf("Second integer : %d\n", b);
    return 0;
}