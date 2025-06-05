#include <stdio.h>

int main()
{
    // checks if the number is armstrong number
    int n;
    printf("Enter number : ");
    scanf(" %d", &n);
    int copy = n;

    int lastDigit, sum = 0;

    while (copy > 0)
    {
        lastDigit = copy % 10;
        sum += lastDigit * lastDigit * lastDigit;
        copy = copy / 10;
    }

    if (sum == n)
    {
        printf("The Number is an Armstrong number\n");
    }
    else
    {
        printf("The Number is not an Armstrong Number\n");
    }

    return 0;
}
