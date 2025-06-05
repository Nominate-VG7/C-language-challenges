#include <stdio.h>

int main()
{
    // program to print input number using pointer
    int n;
    printf("Enter a number : ");
    scanf(" %d", &n);

    int* ptr = &n;
    printf("the value of a number is %d", *ptr);
    return 0;
}