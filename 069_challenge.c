#include <stdio.h>

long long factorial(int);
// factorial of number using long long datatype
// format specifier for long is %ld 
// format specifier for long long is %lld
// format specifier for unsigned long long is %llu
// format specifier for unsigned int is %u
int main()
{
    int num;
    printf("Enter factorial number : ");
    scanf(" %d", &num);
    long long result = factorial(num);
    printf("Factorial of %d is : %llu", num, result);
    return 0;
}

long long factorial(int n){
    if(n <=1){
        return 1;
    }
    return n*factorial(n-1);
}