#include <stdio.h>

int sorted(int arr[], int size);

// this program checks if the array is sorted or not

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}; // sorted array
    int arr2[5] = {6, 5, 4, 3, 2}; // sorted array
    int arr3[5] = {55, 22, 44, 6, 88}; // unsorted array

    if (sorted(arr1, 5))
    {
        printf("First is sorted\n");
    }
    else
    {
        printf("First array is not sorted\n");
    }

    if (sorted(arr2, 5))
    {
        printf("Second is sorted\n");
    }
    else
    {
        printf("Second array is not sorted\n");
    }

    if (sorted(arr3, 5))
    {
        printf("Third is sorted\n");
    }
    else{
        printf("Third array is not sorted\n");
    }
    return 0;
}

int sorted(int arr[], int size){
    int increasing = 1;
    int decreasing = 1;

    for(int i=1; i<size; i++){
        if(arr[i] > arr[i-1]) {
            decreasing = 0;
        }
        else if ( arr[i] < arr[i-1]) {
            increasing = 0;
        }
    }
    return increasing || decreasing;
}