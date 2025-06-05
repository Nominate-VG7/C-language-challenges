#include <stdio.h>

int main()
{
    // program to check if the number is palindrome or not
    int n;
    printf("Enter number : ");
    scanf(" %d", &n);
     
    int copy = n;
    int digit, reverse = 0;
    while(copy > 0){
        digit = copy % 10;
        reverse = reverse*10 + digit;
        copy = copy / 10;
    }
    if(reverse == n){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}