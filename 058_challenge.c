#include <stdio.h>
#include <time.h>

void print_date();

int main()
{
    print_date();
    return 0;
}

void print_date(){
    time_t current_time;   // datatype
    time(&current_time);   // function of time

    char* date_string = asctime(localtime(&current_time));  // asctime is function and localtime is also a function inside the asctime function as an argument
    printf("Current Date is: %s", date_string);
}