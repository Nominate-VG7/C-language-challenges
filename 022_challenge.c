#include <stdio.h>

int main()
{
    // program to determine if number is negative, positive or zero

    float number;
    printf("Enter number : ");
    scanf(" %f", &number);

    if(number > 0) {
        printf("Number is positive");
    }
    else if(number<0) {
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
    return 0;
}