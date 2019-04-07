#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void cinema_reservation() {
    int x, *p = &x;
    printf("Please pick a ticket:\n");
    scanf("%i", p);
    if(*p==1) {
        printf("Normal Ticket 50 LE\n");
    } else if(*p==2) {
        printf("VIP Ticket\n");
    } else if(*p==3) {
        printf("VIP Ticket + Pop Corn\n");
    } else {
        printf("Sorry this ticket is not available\n");
    }
}


void calculator() {
    int x, y, z, *p1 = &x, *p2 = &y, *p3 = &z;
    printf("Enter first value\n");
    scanf("%i", p1);
    printf("Enter second value\n");
    scanf("%i", p2);
    printf("Please pick an operation:\n1.Addition\n2.Substraction\n3.Multiplication\n");
    scanf("%i", p3);
    if(*p3 == 1) {
        printf("The result is: %i\n", (*p1)+(*p2));
    } else if(z==2) {
        printf("The result is: %i\n", (*p1)-(*p2));
    } else if (z==3) {
        printf("The result is: %i\n", (*p1)*(*p2));
    } else {
        printf("Sorry this operation is not available");
    }
}
