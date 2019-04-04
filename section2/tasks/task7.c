#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 5
#define True 1

void swap(int x, int y, int *ptr1, int *ptr2) {
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swapArray(int a[MAX_LENGTH], int b[MAX_LENGTH]) {

    int *aptr, *bptr, temp;

    for(int i=0; i < MAX_LENGTH; i++) {
        swap(a[i], b[i], aptr, bptr);
    }
}

void flipArray(int a[MAX_LENGTH]) {
    int *pointer;
    printf("\nAfter flipping:\n");

    for(int i=0; i < MAX_LENGTH; i++) {
        int temp[MAX_LENGTH];
        int *ptr1 = &a[i];
        int *ptr2 = &temp[MAX_LENGTH - i - 1];
        *ptr2 = *ptr1;
        swapArray(temp, a);
        printf("%i ", *ptr1);
    }

    printf("\n");
}

void array_entry(int size, int *p) {

    for(int i=0; i < size; i++) {
        printf("Please enter a value:\n");
        scanf("%i", p);
        p++;
    }
}

void create_flip_array() {
    int array[MAX_LENGTH];
    int *p = &array[0];
    array_entry(MAX_LENGTH, p);
    printf("The array values are: \n");
    for(int i=0; i < MAX_LENGTH; i++) {
        p = &array[i];
        printf("%i", *p);
    }
    printf("\n");

    flipArray(array);
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

int main() {
    int choice, *pchoice = &choice;

    while(True) {
        printf("Enter the number of your choice:\n1.Array Flipping\n2.Calculator\n3.Cinema Reservation\n");
        scanf("%i", pchoice);

        if(*pchoice == 1) {
            create_flip_array();
        }else if(*pchoice == 2) {
            calculator();
        } else if(*pchoice == 3) {
            cinema_reservation();
        }
    }

    return 0;
}
