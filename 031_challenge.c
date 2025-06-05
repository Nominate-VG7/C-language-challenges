#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks : ");
    scanf(" %d", &marks);

    marks > 80 ? printf("High")
                    : (marks >=50 ? printf("Moderate")
                        :printf("Low"));
    return 0;
}