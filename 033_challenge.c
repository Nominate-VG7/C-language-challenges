#include <stdio.h>

int main()
{
    // a simple calculator to do simple arithmetic operation
    
    int a, b;
    char c;

    printf("Enter a number : ");
    scanf(" %d", &a);
    printf("Enter arithmetic operation : ");
    scanf(" %c", &c);
    printf("Enter second number : ");
    scanf(" %d", &b);

    switch (c)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '/':
        printf("%d / %d = %f", a, b, (float)a / b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '%':
        printf("%d %% %d = %d", a, b, a % b);
        break;
    default:
        printf("Invalid Operation");
    }

    return 0;
}