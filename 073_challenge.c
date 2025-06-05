#include <stdio.h>

// program to locate the maximum and minimum element the array
int main()
{
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter the element number %d : ", (i+1));
        scanf(" %d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for(int i=1; i<10; i++){ // this loop calculates maximum and minimum element in array
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("The maximum element in array is : %d\n", max);
    printf("The minimum element in array is %d\n", min);
    return 0;
}