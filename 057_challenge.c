#include <stdio.h>

int square(int);


int main()
{
    int n;
    printf("Enter any number : ");
    scanf(" %d", &n);

    int store = square(n);
    printf("The square of %d is : %d", n, store);
    return 0;
}

int square(int n){
    int square = n*n;
    return square;
}