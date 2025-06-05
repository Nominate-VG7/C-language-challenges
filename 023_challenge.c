#include <stdio.h>

int main()
{
    // program to check if number is even or odd

    int num;
    printf("Enter a number : ");
    scanf(" %d", &num);

    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    return 0;
}