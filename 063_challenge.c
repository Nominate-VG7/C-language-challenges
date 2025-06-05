#include <stdio.h>

int reverse(int,int);

// recursion function for palindrome 
int main()
{
    int num;
    printf("Enter number : ");
    scanf(" %d", &num);

    int rev = reverse(num, 0);
    if(num == rev){
        printf("Number %d is palindrome %d", num,rev);
    }
    else{
        printf("Number is not palindrome number");
    }

    return 0;
}


int reverse(int num, int rev){
    if(num == 0){
        return rev;
    }
    return reverse(num/10, rev*10 + num%10);
}