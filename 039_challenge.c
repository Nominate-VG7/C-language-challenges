#include <stdio.h>

int main()
{
    // program to evaluate GCD (Greatest Common Divisor) or HCF or GCF

    int first, second;
    printf("Enter first number : ");
    scanf(" %d", &first);
    printf("Enter second number : ");
    scanf(" %d", &second);

    int min = first<second ? first : second; // stores smallest number from first and second
    
    for(int i=min; i>=1;i--){
        if(first%i ==0 && second % i == 0){
            printf("GCD of %d and %d is : %d", first, second, i);
            break;

        }
    }

    return 0;
}