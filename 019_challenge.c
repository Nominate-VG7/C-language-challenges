#include <stdio.h>

int main()
{
    // simple interest calculation
    
    float principal, rate, time;

    printf("Enter principal amount : ");
    scanf(" %f", &principal);
    printf("Enter rate of interest : ");
    scanf(" %f", &rate);
    printf("Enter time : ");
    scanf(" %f", &time);

    float simple_interest = (principal * rate * time) / 100.0;
    printf("Simple interest is : %.3f", simple_interest);
    return 0;
}