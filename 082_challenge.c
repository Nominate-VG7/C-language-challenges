#include <stdio.h>

int left_diagonal(int arr[][3], int rows, int cols);
int right_diagonal(int arr[][3], int rows, int cols);

// this code finds the addtion of the left and right diagonal of the 2d array

int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {2,3,5}};
    
    int result = left_diagonal(arr, 3,3);
    printf("\nthe sum of left diagoanl of 2d array is : %d\n", result);

    
    result = right_diagonal(arr, 3,3);
    printf("the sum of right diagoanl of 2d array is : %d", result);

    return 0;
}


int left_diagonal(int arr[][3], int rows, int cols){
    int leftSum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i == j) {
                leftSum += arr[i][j];
            }
        }
    }
    return leftSum;
}

int right_diagonal(int arr[][3], int rows, int cols){
    int rightSum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i+j == rows-1){
                rightSum += arr[i][j];
            }
        }
    }
    return rightSum;
}