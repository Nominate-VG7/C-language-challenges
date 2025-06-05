#include <stdio.h>
#include <ctype.h> // header file for using the function like toupper() to make lowercase string to uppercase

int main()
{
    char text[100];

    printf("Welcome to converting lowercase string to uppercase!!\n");
    printf("Enter your text : ");
    fgets(text, sizeof(text), stdin);

    for(int i=0; text[i] !='\0'; i++){
        text[i] = toupper(text[i]);
    }

    puts("Your Upper case text is:");
    fputs(text, stdout);
    return 0;
}