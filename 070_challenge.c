#include <stdio.h>
#include <limits.h>

// program to identify the maximus value unsigned and normal int holds

int main()
{   
    unsigned int num = UINT_MAX;
    int normal = INT_MAX;

    printf("The value of unsgined int is ; %u\n", num); //4294967295 is 4 billion
    printf("The value of normal int is : %d\n", normal); // 2147483647 is 2 billion
    return 0;
}