#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int addition(int x, int y) {
    return add(x, y);
}

int substraction(int x, int y) {
    return sub(x, y);
}

int multiplication(int x, int y) {
    return mult(x, y);
}

int division(int x, int y) {
    return div(x, y);
}

void calc() {
    int x, y;
    printf("Insert x: \n");
    scanf("%i", &x);
    printf("Insert y: \n");
    scanf("%i", &y);

    printf("ADDITION = %i", addition(x,y));
    printf("SUBSTRACTION = %i", substraction(x,y));
    printf("MULTIPLICATION = %i", multiplication(x,y));
    printf("DIVISION = %i", division(x,y));
}
