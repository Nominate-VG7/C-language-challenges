#include <stdio.h>

int main()
{
    // program to write sum of digits 
    int n;
    printf("Enter any natural number : ");
    scanf(" %d", &n);

    int modulus, ld = 0;

    while (n > 0)
    {
        modulus = n % 10;  // stores last digit
        ld += modulus;     
        n = n / 10;        // updating n
    }

    printf("Sum of digits = %d\n", ld);
    return 0;
}
