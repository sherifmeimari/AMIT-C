// Make a function that makes power to a number: 
// Ex: 
// Please enter your number: 
// 2 
// The result is: 4

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Please enter your number:\n");
    scanf("%i", &x);
    printf("%i", x*x);
    return 0;
}
