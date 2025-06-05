#include <stdio.h>
#include <string.h>
// this program keeps asking for password until password is right
int main()
{
    const char stroed_password[] = "Pa$$word";
    char pass[20];
    printf("Welcome to secure system\n\n");

    do{
        printf("Enter correct password : ");
        scanf(" %s", pass);
 
    } while (strcmp(pass, stroed_password) != 0);

    printf("\n\nAcess granted");
    return 0;    
}
