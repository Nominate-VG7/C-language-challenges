#include <stdio.h>

int main()
{
    // area of square
    float side, area;
    printf("Enter side of square : ");
    scanf(" %f", &side);

    area = side*2;
    printf("the area of a square is : %f", area);
    return 0;
}