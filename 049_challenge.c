#include <stdio.h>

int main()
{
    // sum of input numbers until zero
    int n,sum = 0;
    while(n){
        printf("Enter number : ");
        scanf(" %d", &n);
        sum += n;
    }
    printf("The total sum is : %d", sum);
    return 0;
}