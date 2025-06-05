#include <stdio.h>
// this program reverses the array elements 

void swap(int *first, int *second); // swaps the array's index to last indexes of same array
void reverse(int arr[], int size); // reverses the arrays element with first and last until it reaches its limit
void print_arr(int arr[], int size); // prints the array

int main()
{   
    printf("Welcome to swapping numbers\n");
    int arr1[] = {1, 2, 5, 7, 8, 9, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    printf("\nReverse this array : \n");
    print_arr(arr1, 8); // prints arr1
    reverse(arr1, 8); // reverses the arr1 
    printf("\n After reverse : \n"); 
    print_arr(arr1, 8);

    printf("\nReverse this array : \n");
    print_arr(arr2, 5);
    reverse(arr2, 5);
    printf("\n After reverse : \n");
    print_arr(arr2, 5);

    return 0; 
}


void reverse(int arr[], int size){
    for(int i=0; i<size/2; i++) {
        swap(&arr[i], &arr[size-1-i]);
    }
}

void swap(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void print_arr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf(" %d", arr[i]);
    }
}