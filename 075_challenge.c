#include <stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element);
void print_arrr(int arr[], int size);

// this program is delete the repeated element in the given array

int main()
{
    printf("Welcome to the deleting elements!!\n");
    int arr[8] = {2, 5, 7, 7, 9, 10, 1, 0};

    int new_arr[8];
    int new_size;

    printf("The array before deletion : ");
    for(int i=0; i<8; i++){
        printf("%d, ", arr[i]);
    }
    delete(arr, 8, new_arr, &new_size, 5);
    printf("\nThe array after deleting 5 is : ");
    print_arrr(new_arr, new_size);

    delete(arr, 8, new_arr, &new_size, 7);
    printf("\nThe array after deleting 7 is : ");
    print_arrr(new_arr, new_size);
    
    delete(arr, 8, new_arr, &new_size, 8);
    printf("\nThe array after deleting 8 is : ");
    print_arrr(new_arr, new_size);
    
    return 0;
}

void print_arrr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf(" %d,", arr[i]);
    }
}

void delete(int arr[], int size, int new_arr[], int *new_size, int element){

    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i] != element) {
            new_arr[j++] = arr[i];
        }
    }
    *new_size = j;
}

