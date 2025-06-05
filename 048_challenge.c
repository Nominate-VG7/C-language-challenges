#include <stdio.h>

int main()
{
    // This program keep asking for positive integer
    int n;
    do{ 
    printf("Enter positive number : ");
    scanf(" %d", &n);
    } while(n<=0);

    printf("You have successfully entered positive number");
    return 0;
}