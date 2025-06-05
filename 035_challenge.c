#include <stdio.h>

int main()
{
    // program to add odd numbers to the specified input
    
    int n;
    printf("Enter a number : ");
    scanf(" %d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            sum +=i;
        }
    }
    printf("sum of odd number is : %d", sum);
    return 0;
}