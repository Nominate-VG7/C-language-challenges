#include <stdio.h>

int increment(int);
// this is program is demonstration of pass by value doesnt change the actual argument

int main()
{
    int n;
    printf("Enter any natural number : ");
    scanf(" %d", &n);

    increment(n);
    printf("the value is : %d", n);
    return 0;
}

int increment(int x){
    x = x+1;
    return x;
}