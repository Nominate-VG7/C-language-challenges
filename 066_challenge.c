#include <stdio.h>
// using character pointer to take input and print 
int main()
{
    char a;
    char* ptr = &a;
    printf("Enter character value : ");
    scanf(" %c",ptr);

    printf("Input character is %c", *ptr);
    return 0;
}