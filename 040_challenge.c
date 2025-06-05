#include <stdio.h>

int main()
{
    int n;
    printf("Enter number : ");
    scanf(" %d", &n);

    int i=2;
    int is_prime = 1;
    while (i<=(n-1)){
        if(n % i == 0){
            is_prime = 0;
            break;
        }
        i++;
    }
    if(is_prime) {
        printf("%d is prime", n);
    }
    else{
        printf("%d is not prime", n);
    }
    return 0;
}