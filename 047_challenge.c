#include <stdio.h>

int main()
{
    /*
        Patter Printing
            *
          * *
        * * *
      * * * *
    * * * * *
    */
    int n;
    printf("Enter number of rows : ");
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  "); // loop for printing the spaces in same row
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* "); // loop for printing stars in same row
        }
        printf("\n");
    }
    return 0;
}