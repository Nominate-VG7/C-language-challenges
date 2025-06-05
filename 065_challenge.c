#include <stdio.h>
// updating the value using pointer
int main()
{
    int n;
    printf("Enter number : ");
    scanf(" %d", &n);   
    int* ptr = &n;

    printf("Value of a number is %d\n", n);
    *ptr = 4;
    printf("updated value using pointer is %d", *ptr);
    return 0;
}