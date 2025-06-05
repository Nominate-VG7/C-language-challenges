#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Welcome to our world of dynamic arrays\n");
    printf("Please enter the number of elements: ");
    scanf(" %d", &size);

    float *arr = (float*)malloc(size * sizeof(float));
    if(arr == NULL) printf("Memory has not allocated!!");

    for(int i=0; i<size; i++) {
        printf("Now enter element no %d: ", (i+1));
        scanf(" %f", &arr[i]); 
    }

    printf("\nHere are your elements: ");
    for(int i=0; i<size; i++) {
        printf(" %.2f", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}