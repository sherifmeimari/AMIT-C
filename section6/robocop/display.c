#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

void Display_State() {
    printf("Robot State: \n");

    printf("Right Arm: ");
    printf("\n shoulder : %i - elbow : %i - wrist : %i - finger : %i ", Right_ARM.shoulder.volt, Right_ARM.elbow.volt, Right_ARM.wrist.volt, Right_ARM.finger.volt);

    printf("\nLeft Arm: ");
    printf("\n shoulder : %i - elbow : %i - wrist : %i - finger : %i ", Left_ARM.shoulder.volt, Left_ARM.elbow.volt, Left_ARM.wrist.volt, Left_ARM.finger.volt);

    printf("\nRight Leg: ");
    printf("\n waist : %i - knee : %i - foot : %i", Right_LEG.waist.volt, Right_LEG.knee.volt, Right_LEG.foot.volt);

    printf("\nLeft Leg: ");
    printf("\n waist : %i - knee : %i - foot : %i", Left_LEG.waist.volt, Left_LEG.knee.volt, Left_LEG.foot.volt);

}