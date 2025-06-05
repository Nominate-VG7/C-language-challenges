#include <stdio.h>
// this program checks if the array is palindrome or not
int main()
{
    
    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int flag=1; // assuming palindrome
    for(int i=0; i<size/2; i++){
        if(arr[i] != arr[size-1-i]){
            flag = 0;
            break;
        }
    }

    if(flag) {
        for(int i=0; i<size; i++) {
            printf("%d  ", arr[i]);
        }
        printf("\nThis is palindrome");
    } else {
        for(int i=0; i<size; i++) {
            printf("%d  ", arr[i]);
        }
        printf("\nThis is not palindrome");
    }
    return 0;
}