#include <stdio.h>

int main()
{
    // program to multiplication table 
    
    int n;
    printf("Enter a number : ");
    scanf(" %d", &n);

    for(int i=1; i<11; i++){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}