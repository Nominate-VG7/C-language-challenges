#include <stdio.h>

int main()
{
    // to see if number is prime or not using while loop
    int n;
    printf("Enter number to check it is prime or not : ");
    scanf(" %d", &n);
    int i=2;
    int is_prime = 0; // Prime Number
    while(i<n){
        if(n%i == 0){
            is_prime = 1; // Not Prime Number
            break;
        }
        i++;
    }
    if(is_prime){
        printf("The Number is not prime number");
    }
    else{
        printf("The Number is prime");
    }
    return 0;
}