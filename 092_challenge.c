#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10] = "exit";
    char chh[10];
    printf("Welcome to our system\n\n");

    while(1) {
        printf("Please enter right command : ");
        scanf(" %s", chh);
        if(!strcmp(chh, ch)) {
            break;
        }
    }

    printf("\n\nExited successfully");
    return 0;
}