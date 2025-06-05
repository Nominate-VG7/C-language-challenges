#include <stdio.h>

int main()
{
    // this prints only even number and continues the odd numbers till the max (inputed value)
    
    int max;
    printf("Enter natural number : ");
    scanf(" %d", &max);

    int i = 1;
    while (i <= max){
        i++;
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    else
    {
        continue;
    }
}
return 0;
}