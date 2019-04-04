// flip an array using pointers and maximum one extra variable ex: 12345 TO 54321 

#include <stdio.h>
#include <stdlib.h>

int main() {

    int MAX_LENGTH, *ptr = &MAX_LENGTH, *pointer;

    // User enters max length of the array
    printf("Enter max lenght of the array:\n");
    scanf("%i", ptr);

    int array[MAX_LENGTH], result[MAX_LENGTH], *ptr1, *ptr2;

    // printing the array before flipping
    printf("\nBefore flipping:\n");
    for(int i=0; i < MAX_LENGTH; i++) {
        pointer = &array[i];
        *pointer = i + 1;
        printf("%i ", *pointer);
    }

    // flipping the array (putting the values in another array)
    for(int i=0; i < MAX_LENGTH; i++) {
        ptr1 = &array[i];
        ptr2 = &result[MAX_LENGTH - i - 1];
        *ptr2 = *ptr1;
    }

    // printing the new array 
    printf("\nAfter flipping:\n");
    for(int i=0; i < MAX_LENGTH; i++) {
        pointer = &result[i];
        printf("%i ", *pointer);
    }

    printf("\n");

    return 0;
}
