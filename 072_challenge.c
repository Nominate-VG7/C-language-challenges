#include <stdio.h>
int occurences(int arr[], int, int);

int main()
{
    int n;
    printf("Enter the you want to check its occurences : ");
    scanf(" %d", &n);
    int arr[5] = {1,5,5,3,2};
    int result = occurences(arr, 5, n);
    printf("The number has occured in the array is : %d times\n", result);

    return 0;
}

int occurences(int arr[], int size, int repeated){
    int counter = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == repeated){
            counter++;
        }
    }
    return counter;
}