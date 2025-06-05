#include <stdio.h>

int main()
{
    // program to calculate perimeter of rectangle
    int length, breadth;
    printf("Enter length of rectangle : ");
    scanf(" %d", &length);

    printf("Enter bredth of rectangle : ");
    scanf(" %d", &breadth);

    int perimeter = 2*(length + breadth);
    printf("Perimeter of rectangle is : %d", perimeter);
    return 0;
}