#include <stdio.h>

int main()
{
    // area of triangle

    int base, height;

    printf("Enter base of triangle : ");
    scanf(" %d", &base);

    printf("Enter height of triangle : ");
    scanf(" %d", &height);

    float area = (base*height)/2.0;
    printf("Area of triangle is : %.3f", area);
    return 0;
}