#include <stdio.h>

int main()
{
    // program to print fibonacci series
    
    int n;
    printf("Enter natural number : ");
    scanf(" %d", &n);
    int a = 0;
    int b = 1;
    int c;
    printf("fibonacci series : %d  ", a);

    if (n > 0)
    {
        printf("%d  ", b);
    }

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        printf("%d  ", c);
        a = b;
        b = c;
    }
    // 0 1 1 2 3 4
    return 0;
}