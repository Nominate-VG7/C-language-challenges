#include <stdio.h>

int main()
{
    // program to print absolute value of a number
    int number;

    printf("Enter a number : ");
    scanf(" %d", &number);

   int num =  number<0 ? number*-1 : number;
   printf("Absolute value is : %d", num);
    return 0;
}