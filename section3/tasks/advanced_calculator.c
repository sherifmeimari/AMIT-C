#include <stdio.h>
#include <stdlib.h>
#include <functions.h>

void advanced_calculator() {
    int choice, *pchoice = &choice;

    while(True) {
        printf("Enter the number of your choice:\n1.Array Flipping\n2.Calculator\n3.Cinema Reservation\n4.Miss Step\n5.Battery Checker\n6.Fibonacci Series\n7.Stack Builder\n8.Power of Number\n9.Christmas Tree Builder");
        scanf("%i", pchoice);

        if(*pchoice == 1) {
            create_flip_array();
        }else if(*pchoice == 2) {
            calculator();
        } else if(*pchoice == 3) {
            cinema_reservation();
        } else if(*pchoice == 4) {
            miss_step();
        } else if(*pchoice == 5) {
            battery_checker();
        } else if(*pchoice == 6) {
            fibonacci();
        } else if(*pchoice == 7) {
            stack();
        } else if(*pchoice == 8) {
            power();
        } else if(*pchoice == 9) {
            christmas_tree();
        }
    }
}
