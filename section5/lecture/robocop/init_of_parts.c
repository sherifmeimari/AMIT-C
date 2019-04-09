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
