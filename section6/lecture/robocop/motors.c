#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

void Motors_init(void) {
    Main_Driver.Left_Arm_Driver.Arm_Driver_ptr = &Left_ARM;
    Main_Driver.Right_Arm_Driver.Arm_Driver_ptr = &Right_ARM;
    Main_Driver.Left_Leg_Driver.Leg_Driver_ptr = &Left_LEG;
    Main_Driver.Right_Leg_Driver.Leg_Driver_ptr = &Right_LEG;
    printf("\nMotors initialized successfully.");
}
