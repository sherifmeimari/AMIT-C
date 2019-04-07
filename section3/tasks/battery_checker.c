#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

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
