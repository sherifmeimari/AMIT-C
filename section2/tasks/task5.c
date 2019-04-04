// Make a function called " Array_Entry " 
// This function takes a pointer to an array , 
// And the size of the array .
// And directly changes the values of the array depending on input (scanf) 

#include <stdio.h>
#include <stdlib.h>

void array_entry(int size, int *p) {

    for(int i=0; i < size; i++) {
        printf("Please enter a value:\n");
        scanf("%i", p);
        p++;
    }
}

int main() {
    int size = 5;
    int array[size];
    int *p = &array[0];
    array_entry(size, p);
    printf("The array values are: \n");
    for(int i=0; i < size; i++) {
        p = &array[i];
        printf("%i", *p);
    }
    printf("\n");
    
    return 0;
}
