#include <stdio.h>

int main()
{
    // sum of only positive numbers and skipping negative numbers til inputed by user
    int n,sum=0;
    do{
        printf("Enter number : ");
        scanf(" %d", &n);
        if(n<0){
            continue;
        }
        sum+=n;
    }while(n); // program exists when i is inputed zero
    printf("The sum of positive numbers are : %d", sum);
    return 0;
}