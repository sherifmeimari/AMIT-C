// Make a calculator function (WITH POINTERS!) that: 
// If user enters 1 it goes to the calculator.  And prints the result from 
// 1. Addition 
// 2. Subtraction 
// 3. Multiplication. 
// ----- 
// If user enters 2 it goes to cinema ticket.  
// If user picks 1 
// It prints: normal ticket 50 LE 
// If user picks 2 
// It prints: vip ticket 
// If user picks 3 
// It prints: vip + pop corn

#include <stdio.h>
#include <stdlib.h>
#define True 1

void calculate() {
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

void ticket() {
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
    int x, *p = &x;
    printf("Make a choice:\n");
    scanf("%i", p);

    if(*p == 1) {
        calculate();
    } else if(*p == 2) {
        ticket();
    }
}

int main() {
    while(True) {
        calculator();
    }
    return 0;
}
