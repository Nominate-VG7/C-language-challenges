#include <stdio.h>

void copy(char* arr, int size, char* new_arr);
void print(char* arr, int size);
// this program copies the character array and prints it using functions
int main()
{
    char arr[5] = {'a', 'b', 'c', 'e', 'd'};
    char arr1[5];
    printf("Original character array!!\n");
    print(arr, 5);
    printf("\nCopied character array!!\n");
    copy(arr, 5, arr1);
    print(arr1, 5);
    return 0;
}

void print(char* arr, int size){
    for(int i=0; i<size; i++){
        printf("%c ", arr[i]);
    }
}

void copy(char* arr, int size, char* new_array) {
    for(int i=0; i<size; i++) {
        *new_array = *arr;
        arr++;
        new_array++;

        // *(new_array + i) = *(arr + i);
    }
}