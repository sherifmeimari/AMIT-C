#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5];
    for(int i=0; i < 5; i++) {
        a[i] = 0;
        printf("%i\n", a[i]);
    }
    printf("size of array: %lu\n", sizeof(a));
    printf("Number of elements: %lu\n", sizeof(a)/sizeof(int));

    return 0;
}
