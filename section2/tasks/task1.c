#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 1, y = 2, *ptr1 = &x, *ptr2 = &y, temp;

    printf("Before swapping:\nx = %i\ny = %i\n", *ptr1, *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping:\nx = %i\ny = %i\n", *ptr1, *ptr2);

    return 0;
}

// Make a function that takes an input and returns all the loop concerned except the reminder of number: 
// Ex: 
// Please enter the number: 50 
// Please enter the skipped: 3 
// The formula: 
// 1 2 4 5 7 8 10 11 13 14 16 17 19 20......  Up to 50
