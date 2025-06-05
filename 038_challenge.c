#include <stdio.h>

int main()
{
    // calculates LCM
    int first, second;
    printf("Enter first number : ");
    scanf(" %d", &first);
    printf("Enter second number : ");
    scanf(" %d", &second);

    int min = first > second ? first : second; // stores biggest number from first and second input numbers OR start point of loop (using ternary operator)
    int max = first * second; // End point of loop

    for(int i=min; i<=max; i++){
        if(i%first == 0 && i%second == 0){
            printf("LCM of %d and %d is : %d", first, second, i);
            break;
        }
    }

    return 0;
}