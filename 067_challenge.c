#include <stdio.h>

void min_max(int*, int*, int*, int*);
// this program takes two numbers and assign min and max value to the dedicated variables using pointer function only
int main()
{
    int first, second, min, max;
    printf("Enter first number : ");
    scanf(" %d", &first);
    printf("Enter second number : ");
    scanf(" %d", &second);

    min_max(&first, &second, &min, &max);
    printf("Between %d and %d, minimum is %d and maximum is %d", first, second, min, max);

    return 0;
}

void min_max(int *a, int* b, int* min, int* max){
    if(*a < *b) {
        *min = *a;
        *max = *b;
    }
    else{
        *min = *b;
        *max = *a;
    }
}