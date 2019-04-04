// After ending the 3 tasks 
// Make a fourth project which has a function that calls the three functions .

#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 5

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
    for(int i=0; i < MAX_LENGTH; i++) {
        int temp[MAX_LENGTH];
        int *ptr1 = &a[i];
        int *ptr2 = &temp[MAX_LENGTH - i - 1];
        *ptr2 = *ptr1;
        swapArray(temp, a);
    }
}

int main() {
    int array[MAX_LENGTH], *pointer;

    printf("Before flipping:\n");
    for(int i=0; i < MAX_LENGTH; i++) {
        pointer = &array[i];
        printf("%i ", *pointer);
    }

    flipArray(array);

    printf("\nAfter flipping:\n");
    for(int i=0; i < MAX_LENGTH; i++) {
        pointer = &array[i];
        printf("%i ", *pointer);
    }

    printf("\n");

    return 0;
}
