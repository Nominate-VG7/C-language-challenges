#include <stdio.h>

// this program converts distance in km to miles
int main()
{
    const float MILES_PER_KM =  0.621371; 
    unsigned long km;
    printf("Enter distance in kms : ");
    scanf(" %ld", &km);

    unsigned long miles = km * MILES_PER_KM;
    printf("The distance in miles are : %ld", miles);
    return 0;
}