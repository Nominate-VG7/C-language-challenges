#include <stdio.h>

int main()
{
    // program to calculate area of rectangle

    int length, breadth;
    printf("Enter length of rectangle : ");
    scanf(" %d", &length);

    printf("Enter breadth of rectangle : ");
    scanf(" %d", &breadth);

    int area = length * breadth;

    printf("Area of rectangle is : %d", area);
    return 0;
}