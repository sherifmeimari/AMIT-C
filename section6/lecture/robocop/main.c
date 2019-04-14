#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

int main() {
    Robo_Init();
    Motors_init();
    Parts_Init();
    for(;;) {
        Display_State();
        Encryption_Process();
        Decryption_Process();
    }
    return 0;
}