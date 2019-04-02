#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Enter a number:\n");
    scanf("%i", &x);
    for(int i=1; i<=x; i++) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}