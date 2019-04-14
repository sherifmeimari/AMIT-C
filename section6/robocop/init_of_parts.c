#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

void Robo_Init(void) {
    Left_ARM.shoulder.elbow_ptr = &Left_ARM.elbow;
    Left_ARM.elbow.wrist_ptr = &Left_ARM.wrist;
    Left_ARM.wrist.finger_ptr = &Left_ARM.finger;
    printf("\n Left Arm initialized Successfully.");

    Right_ARM.shoulder.elbow_ptr = &Right_ARM.elbow;
    Right_ARM.elbow.wrist_ptr = &Right_ARM.wrist;
    Right_ARM.wrist.finger_ptr = &Right_ARM.finger;
    printf("\n Right Arm initialized Successfully.");

    Left_LEG.waist.knee_ptr = &Left_LEG.knee;
    Left_LEG.knee.foot_ptr = &Left_LEG.foot;
    printf("\n Left Leg initialized Successfully.");

    Right_LEG.waist.knee_ptr = &Right_LEG.knee;
    Right_LEG.knee.foot_ptr = &Right_LEG.foot;
    printf("\n Right Leg initialized Successfully.");
}

void Parts_Init(void) {
    Left_ARM.shoulder.volt = Volt_Low;
    Left_ARM.elbow.volt = Volt_Low;
    Left_ARM.wrist.volt = Volt_Low;
    Left_ARM.finger.volt = Volt_Low;

    Right_ARM.shoulder.volt = Volt_Low;
    Right_ARM.elbow.volt = Volt_Low;
    Right_ARM.wrist.volt = Volt_Low;
    Right_ARM.finger.volt = Volt_Low;

    Left_LEG.waist.volt = Volt_Low;
    Left_LEG.knee.volt = Volt_Low;
    Left_LEG.waist.volt = Volt_Low;

    Right_LEG.waist.volt = Volt_Low;
    Right_LEG.knee.volt = Volt_Low;
    Right_LEG.waist.volt = Volt_Low;
}