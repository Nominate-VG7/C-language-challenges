#include <stdio.h>

int main()
{
    // greatest among three distinct numbers
    int first, second, third;

    printf("Enter first number : ");
    scanf(" %d", &first);
    printf("Enter second number : ");
    scanf(" %d", &second);
    printf("Enter third number : ");
    scanf(" %d", &third); 
     
    if(first>second && first>third) {
        printf("First is greatest : %d", first);
    }
    else if(second>first && second>third){
        printf("Second is greatest : %d", second);
    }
    else if(third>first && third>second){
        printf("third is greatest : %d", third);
    }
    else{
        printf("Numbers are equal");
    }
    return 0;
}