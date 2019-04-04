#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 10
#define True 1

int main() {

    int stack[MAX_LENGTH], *sp = stack, choice;

    while(True) {
        printf("Push(1) or Pop(2):\n");
        scanf("%i", &choice);

        if(choice == 1) {
            if(sp < &stack[MAX_LENGTH - 1]) {
                printf("Enter value:\n");
                scanf("%i", sp);
                sp++;
            } else {
                printf("The memory of the stack has been exceeded!");
            }
        } else if(choice == 2) {
            if(sp > &stack[0]) {
                sp--;
                printf("the value %i is removed!\n", *sp);
            } else {
                printf("The stack is already empty!");
            }
        } else {
            break;
        }

        printf("\nHere is your stack: \n");

        for(int i=0; i < MAX_LENGTH; i++) {
            if(&stack[i] == sp) {
                break;
            }
            printf("%i ", stack[i]);
        }

        printf("/n");
    }

    return 0;
}
