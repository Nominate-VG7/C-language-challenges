#include <stdio.h>

int main()
{
    // program to calculate area of a circle
    
    const float PI = 3.14159;
    float radius, area;

    printf("Enter radius of a circle : ");
    scanf("%f", &radius);

    area = PI*radius*radius;
    printf("The area of a circle is : %.3f", area); 
    return 0;
}