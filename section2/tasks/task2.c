// swap values in 2 Arrays "using pointers"

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int main() {

    int a[MAX_SIZE], b[MAX_SIZE], *aptr, *bptr, temp;

    for(int i=0; i < MAX_SIZE; i++) {
        a[i] = i+1;
        b[i] = i+6;
    }

    printf("\nArray A before swapping:\n");
    for(int i=0; i < MAX_SIZE; i++) {
        printf("%i", a[i]);
    }

    printf("\nArray B before swapping:\n");
    for(int i=0; i < MAX_SIZE; i++) {
        printf("%i", b[i]);
    }

    for(int i=0; i < MAX_SIZE; i++) {
        aptr = &a[i];
        bptr = &b[i];
        temp = *aptr;
        *aptr = *bptr;
        *bptr = temp;
    }

    printf("\nArray A after swapping:\n");
    for(int i=0; i < MAX_SIZE; i++) {
        printf("%i", a[i]);
    }

    printf("\nArray B after swapping:\n");
    for(int i=0; i < MAX_SIZE; i++) {
        printf("%i", b[i]);
    }

    return 0;
}
