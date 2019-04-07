#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

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

vvoid flipArray(int a[MAX_LENGTH]) {
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
