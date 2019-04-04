// Make a function that takes an input and returns all the loop concerned except the reminder of number: 
// Ex: 
// Please enter the number: 50 
// Please enter the skipped: 3 
// The formula: 
// 1 2 4 5 7 8 10 11 13 14 16 17 19 20......  Up to 50

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
