#include <stdio.h>

int main()
{
    // program to create circumference of a circle
    
    const float PI = 3.14159;
    float radius, circumference;
    printf("Enter radius of a circle : ");
    scanf(" %f", &radius);

    circumference = 2*PI*radius;
    printf("The circumference of a circle is : %f", circumference);
    return 0;
}