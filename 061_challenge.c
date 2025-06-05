#include <stdio.h>

float average(int, int, int, int, int);

// program a function to calculate mean of five numbers
int main()
{
    int one,two,three,four,five;
    printf("Enter first number : ");
    scanf(" %d", &one);
    printf("Enter second number : ");
    scanf(" %d", &two);
    printf("Enter third number : ");
    scanf(" %d", &three);
    printf("Enter fourth number : ");
    scanf(" %d", &four);
    printf("Enter fifth number : ");
    scanf(" %d", &five);

    float store = average(one,two,three,four,five);
    printf("The average of %d, %d, %d, %d, %d is : %.2f", one, two, three, four, five, store);
    return 0;
}


float average(int x, int y, int z, int a, int b){
    float mean = (x+y+z+a+b)/5.0;
    return mean;
}