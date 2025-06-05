#include <stdio.h>

int sum(int*, int);
int main()
{
    // program to calculate sum and its average of 5 numbers using integer array
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %d number : ", (i+1));
        scanf(" %d", &arr[i]);
    }
    int sum1 = sum(arr, i);
    printf("\nSum is : %d\nAverage is : %.2f", sum1, sum1/5.0); // sum of input numbers and their average
    return 0;
}

int sum(int* arr, int n){
    int result = 0;
    for(int i=0; i<n;i++){
        result += *(arr+i);
    }
    return result; // this calculates the sum of the 5 inputed numbers
}
