#include <stdio.h>

int main()
{
    // multiplication table using while loop
    int n;
    printf("Enter multiplicative number : ");
    scanf(" %d", &n);
    int i=1;
    while(i<=10){
        printf("%d X %d = %d\n", n,i,n*i);
        i++;
    }
    return 0;
}