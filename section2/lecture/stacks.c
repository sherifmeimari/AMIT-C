#include <stdio.h>
# include <stdlib.h>

int main() {
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, counter = 0, choice, i;

    while(1) {
        printf("Enter push(1) or pop(2): \n");
        scanf("%i", &choice);

        if(choice == 1) {
            int value;
            printf("Enter value: \n");
            scanf("%i", &value);
            if(counter == 0) {
                x1 = value;
            } else if(counter == 1) {
                x2 = value;
            } else if(counter == 2) {
                x3 = value;
            } else if(counter == 3) {
                x4 = value;
            } else if(counter == 4) {
                x5 = value;
            } else if(counter >= 5) {
                printf("sorry you have exceeded the memory capacity!\n");
            }
            counter ++;
        } else if(choice == 2) {
             if(counter == 0) {
                break;
            } else if(counter == 1) {
                x1 = 0;
            } else if(counter == 2) {
                x2 = 0;
            } else if(counter == 3) {
                x3 = 0;
            } else if(counter == 4) {
                x4 = 0;
            } else if(counter == 5) {
                x5 = 0;
            }
            counter --;
        } 

        printf("x1 = %i, x2 = %i, x3 = %i, x4 = %i, x5 = %i\n", x1, x2, x3, x4, x5);
    }

    return 0;
    
}
