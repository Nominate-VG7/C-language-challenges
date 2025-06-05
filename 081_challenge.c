#include <stdio.h>

int sum(int arr[][2], int rows, int cols);

int main()
{
    int arr[2][2] = {{1,2}, {3,4}};

    int result = sum(arr, 2, 2);
    printf("\n");
    printf("the sum of all elements of 2d array is : %d\n", result);
    printf("the average of all elements of 2d array is : %.2f\n", result/2.0);
    
    return 0;
}

int sum(int arr[][2], int rows, int cols){
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += arr[i][j]; 
        }
    }
    return sum;
}