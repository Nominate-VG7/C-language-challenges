#include <stdio.h>

int main()
{
    // product of two float numbers
    float a,b;

    printf("Enter first number : ");
    scanf("%f", &a);

    printf("Enter second number : ");
    scanf("%f", &b);

    float product = a*b;
    printf("Product of two number is : %.3f", product);
    return 0;
}