#include <stdio.h>
#include <stdlib.h>

struct Car {
    char make[25];
    char model[25];
    int year;
    char color[15]; // members or attribute of struct 
};

typedef struct Car Car;

void print_car(Car *car);

int main()
{
    printf("Welcome to Dynamic Island\n\n");
    Car* my_car = (Car*) malloc(sizeof(Car));

    if(my_car == NULL) printf("Memory is not allocated\n");
    printf("Please Enter your car model : ");
    scanf(" %s", my_car->model);
    printf("Please Enter your car company : ");
    scanf(" %s", my_car->make);
    printf("Please Enter your car color : ");
    scanf(" %s", my_car->color);
    printf("Please Enter your car year : ");
    scanf(" %d", my_car->year);

    printf("\n\nHere are your car details: ");
    print_car(my_car);
    free(my_car);
    my_car = NULL;
    return 0;
}

void print_car(Car *car){
    printf("This %s model of car, which is of %s color, was purchased in %d year, and is made by %s company",  
           car->model, car->color, car->year, car->make);
}
