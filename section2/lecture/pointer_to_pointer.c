#include <stdio.h>
#include <stdlib.h>

int main() {

    int ***ptr1,**ptr2, *ptr3, x=0;
    ptr1 = &ptr2;
    ptr2 = &ptr3;
    ptr3 = &x;
    printf("Initial value of x = %i\n", x);
    printf("Enter new value of x with ptr1: \n");
    scanf("%i", **ptr1);
    printf("value of x is: %i\n", x);
    printf("Enter new value of x with ptr2: \n");
    scanf("%i", *ptr2);
    printf("value of x is: %i\n", x);
    printf("Enter new value of x with ptr3: \n");
    scanf("%i", ptr3);
    printf("value of x is: %i\n", x);

    printf("Adress of ptr1 = %p\n", &ptr1);
    printf("Adress of ptr2 = %p\n", &ptr2);
    printf("Adress of ptr3 = %p\n", &ptr3);

    printf("Adress of ptr2 with ptr1 is: %p\n", ptr1);
    printf("Adress of ptr3 with ptr2 is: %p\n", ptr2);

    return 0;
}
