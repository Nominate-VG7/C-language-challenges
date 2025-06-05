#include <stdio.h>

int main()
{

    //program to evaluate age groups

    int age;

    printf("Enter age : ");
    scanf(" %d", &age);

    if (age < 13)
    {
        printf("Child");
    }
    else if (age < 20)
    {
        printf("Teen");
    }
    else if (age < 60)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior Citizen");
    }

    return 0;
}
