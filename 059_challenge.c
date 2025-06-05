#include <stdio.h>
// program a function which determines the greatest float value 
float max(float, float);

int main()
{
    float x, y;
    printf("Enter first decimal value : ");
    scanf(" %f", &x);
    printf("Enter second decimal value : ");
    scanf(" %f", &y);

    float greatest = max(x,y);
    printf("The Greatest Decimal value is %.2f", greatest);
    return 0;
}

float max(float x, float y){
    float big;
    if(x>y){
        big = x;
    } 
    else{
        big = y;
    }
    return big;
}