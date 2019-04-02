#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, i;
    printf("Please enter the number:\n");
    scanf("%i", &x);
    printf("Please enter the skipped:\n");
    scanf("%i", &y);

    for(i=1; i<=x; i++) {
        if(i%y==0) {
            continue;
        } else {
            printf("%i", i);
        }
    }
    return 0;
}