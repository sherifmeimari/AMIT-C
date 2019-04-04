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
