#include <stdio.h>
#include <string.h>

// program to check if the entered password is correct

int main()
{   
    const char STORED_PASSWORD[] = "KGCodingSecret";
    char password[50];
    printf("Welcome to Secure System.\n\n");
    printf("Enter your password : ");
    scanf(" %s", password);
    // fgets(password, sizeof(password), stdin);

    if(strcmp(password, STORED_PASSWORD)== 0) {
        puts("Access granted to the System.");
    }
    else{
        puts("Access denied to the system");
    }
    return 0;
}