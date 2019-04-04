#include <stdio.h>
#include <stdlib.h>
#define macro return
#define addition(x,y) x+y
#define substraction(x,y) x-y
#define multiplication(x,y) x*y

int add(int x, int y) {
    macro addition(x,y);
}

int sub(int x, int y) {
    macro substraction(x,y);
}

int mult(int x, int y) {
    macro multiplication(x,y);
}

int main() {
    int x = 10, y = 20;
    printf("%i\n", add(x, y));
    printf("%i\n", sub(x, y));
    printf("%i\n", mult(x, y));

    return 0;
}



