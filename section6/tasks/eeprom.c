#include <stdio.h>
#include <stdlib.h>
#define MAX_FOR_MAINTENANCE 2000

struct eeprom {
    int maintenance;
    int all_KM;
    int counter;
};

struct eeprom regular_maintenance(struct eeprom *handler, struct eeprom EEPROM) {

    handler = &EEPROM;

    handler -> maintenance = 0; 
    handler -> counter = 0;

    return EEPROM;
}

struct eeprom add_to_MCU(struct eeprom *handler, struct eeprom EEPROM) {

    handler = &EEPROM;
    int added_KM;

    printf("\nEnter the number of kilometers:");
    scanf("%i", &added_KM);
    
    handler -> maintenance += added_KM;

    return EEPROM;
}

struct eeprom add_to_KM(struct eeprom *handler, struct eeprom EEPROM) {

    handler = &EEPROM;

    handler -> all_KM += (handler -> maintenance - handler -> counter);
    handler -> counter= handler -> maintenance;

    return EEPROM;
}

int main() {
    struct eeprom EEPROM;
    struct eeprom *handler = &EEPROM;

    handler -> counter = 0;
    handler -> all_KM = 0;
    handler -> maintenance = 0;

    for(;;) {
        printf("\nMaintenance is now: %i", handler -> maintenance);
        printf("\nNumber of all KM is now: %i", handler -> all_KM);
        int choice;
        printf("\nFor adding kilometers press(1) & for maintenance press(2):\n");
        scanf("%i", &choice);

        if(choice == 1) {
            EEPROM = add_to_MCU(handler, EEPROM);
            EEPROM = add_to_KM(handler, EEPROM);
            if(handler -> maintenance >= MAX_FOR_MAINTENANCE) {
                printf("\nYOU NEED MAINTENANCE ASAP YA M3ALEM!!");
            }
        } else if(choice == 2) {
            EEPROM = regular_maintenance(handler, EEPROM);
        }

    }

    return 0;
}
