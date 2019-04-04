// Make a function called " Battery_Low" 
// This Function will ask the user to enter the battery current value : 
// If the value is 10 it will print Battery Full , Please remove the battery 
// If the value is more than 10 it will print Battery Motafagera Hazeeena
// if the value is between 5 and 10 it will print Battery is normal 
// if the value is around 0-5 it will print battery low .
// NOTE : USE MACROS IN THE IF STATEMENT TO INDICATE THE STATES OF THE BATTERY AND REMEMBER IT'S JUST TEXT REPLACEMENT

#include <stdio.h>
#include <stdlib.h>
#define FULL "Battery Full"
#define MOTAFAGERA "Battery MOTAFAGERA HAZEENA!"
#define NORMAL "Battery Normal"
#define LOW "Battery low"

void battery_checker() {
    int battery, *pointer = &battery;
    printf("Please enter the current battery value:\n");
    scanf("%i", pointer);

    if(*pointer == 10) {
        printf(FULL);
    } else if(*pointer > 10) {
        printf(MOTAFAGERA);
    } else if(*pointer > 5 && *pointer < 10) {
        printf(NORMAL);
    } else {
        printf(LOW);
    }
    printf("\n");
} 

int main() {

    battery_checker();
    return 0;
}
