#include <stdio.h>

int main()
{
    // program to calculate factorial

    int n;

    printf("Factorial Calculator!!\n");
    printf("Enter a number : ");
    scanf(" %d", &n);

    int i=1;
    int factorial = 1;
    while(i<=n){
        factorial *= i;
        i++;
    }

    printf("Factorial of %d = %d", n, factorial);

    return 0;
}