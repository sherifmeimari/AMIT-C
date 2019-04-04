// Make a function called " Battery_Low" 
// This Function will ask the user to enter the battery current value : 
// If the value is 10 it will print Battery Full , Please remove the battery 
// If the value is more than 10 it will print Battery Motafagera Hazeeena
// if the value is between 5 and 10 it will print Battery is normal 
// if the value is around 0-5 it will print battery low .

#include <stdio.h>
#include <stdlib.h>

void battery_checker() {
    int battery, *pointer = &battery;
    printf("Please enter the current battery value:\n");
    scanf("%i", pointer);

    if(*pointer == 10) {
        printf("Battery Full");
    } else if(*pointer > 10) {
        printf("Battery MOTAFAGERA HAZEENA!");
    } else if(*pointer > 5 && *pointer < 10) {
        printf("Battery Normal");
    } else {
        printf("Battery low");
    }
    printf("\n");
} 

int main() {

    battery_checker();
    return 0;
}
