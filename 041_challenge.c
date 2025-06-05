#include <stdio.h>


int main()
{
    // program to reverse the inputed number
    int n;
    printf("Enter natural number : ");
    scanf(" %d", &n);

    int ld, reverse =0;

    while(n>0) {
        ld = n%10;
        reverse = reverse*10 + ld;
        n = n/10;

    }
    
    printf("%d", reverse);
    return 0;
}