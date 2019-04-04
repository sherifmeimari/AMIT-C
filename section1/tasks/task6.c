#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Enter a number:\n");
    scanf("%i", &x);
    for(int i=1; i<x; i++) {
        for(int j=x+(x/2); j>i; j--) {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

