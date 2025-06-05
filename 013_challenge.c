#include <stdio.h>

int main()
{
    // program to show arithmatical operation for 2 numbers
    
    int first, second;

    printf("Enter first number : ");
    scanf(" %d", &first);

    printf("Enter second number : ");
    scanf(" %d", &second);

    printf("%d + %d = %d\n", first, second, (first + second));
    printf("%d - %d = %d\n", first, second, (first - second));
    printf("%d * %d = %d\n", first, second, (first * second));
    printf("%d / %d = %f\n", first, second, (float)first/second);
    printf("%d %% %d = %d\n", first, second, (first % second));
    return 0;
}