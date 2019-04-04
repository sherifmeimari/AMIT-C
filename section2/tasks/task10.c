// Fibonacci Series

#include <stdio.h>
#include <stdlib.h>

int main() {
    int max, first, second, next;
    printf("Enter the number of terms:\n");
    scanf("%i", &max);

    printf("Fibonacci series:\n");
    for(int i=0; i < max; i++) {
        if(i > 1) {
            next = first + second;
            first = second;
            second = next;
        } else {
            next = i;
            first = 1;
            second = 1;
        }
        printf("%i", next);
    }

    printf("\n");

    return 0;
}
