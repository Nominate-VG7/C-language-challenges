#include <stdio.h>

int main()
{
    // fahrenheit to celsius 

    float fahrenheit;

    printf("Enter temperature in fahrenheit : ");
    scanf(" %f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5.0/9.0;
    printf("Temperature in celsius : %.3f", celsius);
    
    return 0;
}