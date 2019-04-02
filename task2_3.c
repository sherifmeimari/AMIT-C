#include <stdio.h>
#include <stdlib.h>

void calculator() {
    int x, y, z;
    printf("Enter first value\n");
    scanf("%i", &x);
    printf("Enter second value\n");
    scanf("%i", &y);
    printf("Please pick an operation:\n1.Addition\n2.Substraction\n3.Multiplication\n");
    scanf("%i", &z);
    if(z == 1) {
        printf("The result is: %i\n", x+y);
    } else if(z==2) {
        printf("The result is: %i\n", x-y);
    } else if (z==3) {
        printf("The result is: %i\n", x*y);
    } else {
        printf("Sorry this operation is not available");
    }
}

void ticket() {
    int x;
    printf("Please pick a ticket:\n");
    scanf("%i", &x);
    if(x==1) {
        printf("Normal Ticket 50 LE\n");
    } else if(x==2) {
        printf("VIP Ticket");
    } else if(x==3) {
        printf("VIP Ticket + Pop Corn\n");
    } else {
        printf("Sorry this ticket is not available");
    }
}

void advancedCalculator() {
    int x;
    printf("Please enter a choice between 1 and 2:\n");
    scanf("%i", &x);
    if(x==1) {
        calculator();
    } else if(x==2) {
        ticket();
    } else {
        printf("Sorry this choice is not available");
    }
    
}

int main() {
    advancedCalculator();
    return 0;
}




