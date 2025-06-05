#include <stdio.h>

int add(int, int, int, int);

int add(int a, int b, int c, int d)
{
    int sum = a + b + c + d;
    return sum;
}

int main()
{
    int sum, a, b, c, d;
    printf("Enter first number : ");
    scanf(" %d", &a);
    printf("Enter second number : ");
    scanf(" %d", &b);
    printf("Enter third number : ");
    scanf(" %d", &c);
    printf("Enter fourth number : ");
    scanf(" %d", &d);

    sum = add(a,b,c,d);
    printf("The sum of four numbers are : %d", sum);
     return 0;
}