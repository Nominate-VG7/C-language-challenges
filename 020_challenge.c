#include <stdio.h>
#include <math.h>

int main()
{
    // compound interest calculator
     
    float principal, rate, time;

    printf("Enter principal amount : ");
    scanf(" %f", &principal);
    printf("Enter rate : ");
    scanf(" %f", &rate);
    printf("Enter time : ");
    scanf(" %f", &time);

    float compound_interest =principal*pow(((100+rate)/100.0),time)-principal;
    printf("Compound interest is : %.3f", compound_interest);
    return 0;
}