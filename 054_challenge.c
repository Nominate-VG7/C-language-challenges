#include <stdio.h>

int main()
{
    int n;
    do{
        printf("Enter number : ");
        scanf(" %d", &n);
        int sqaure = n*n;
        printf("the square of inputed number is : %d\n", sqaure); // prints the square of inpute value
    } while (n>0); // loop exits when number is inputed less than zero
    return 0;
}