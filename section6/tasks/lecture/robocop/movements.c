#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

void check_VOLTAGE(int volt) {
    if(volt > 15) {
        printf("\n\aROBOT 7AZEEN!");
    }
}

void Encrypted_Order(void) {
    CO.HC->Encrypted = CO.u8_Encrypted;
    CO.u8_Encrypted = 0;
}

void Send_Order(void) {
    char Order[20];
    printf("\nEnter order:\n");
    scanf("%s", Order);
    printf("\n");
    if(Order[0] == 'R' && Order[6] == 'A') {
        CO.u8_Encrypted = Set_Bit(CO.u8_Encrypted, Right_ARM_Encryption);
        printf("\nRight ARM Order is set.");
    } else if(Order[0] == 'L' && Order[6] == 'R') {
        CO.u8_Encrypted = Set_Bit(CO.u8_Encrypted, Left_ARM_Encryption);
        printf("\nLeft ARM Order is set.");
    } else if(Order[0] == 'R' && Order[6] == 'L') {
        CO.u8_Encrypted = Set_Bit(CO.u8_Encrypted, Right_LEG_Encryption);
        printf("\nRight LEG Order is set.");
    } else if(Order[0] == 'L' && Order[6] == 'E') {
        CO.u8_Encrypted = Set_Bit(CO.u8_Encrypted, Left_LEG_Encryption);
        printf("\nLeft LEG Order is set.");
    }
    
}

void Selection_of_Orders(void) {
        u8 u8_User_Pick;
        for(;;) {
            printf("\nIf you want another Selection Press (1), else Press (2):");
            scanf("%i", &u8_User_Pick);
            printf("\n");

            if(u8_User_Pick == 1) {
                Send_Order();
            } else if(u8_User_Pick == 2) {
                break;
            } else {
                printf("\nPlease Re-Define your purpose.\n");
            }  
        }
    }

void Controller_Init(void) {
    CO.HC = &Main_Driver;
}

void Encryption_Process(void) {
    Selection_of_Orders();
    Encrypted_Order();
}

void Move_Right_ARM(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Right ARM:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        printf("\nEnter voltage for Right Arm shoulder:\n");
        scanf("%i", &Right_ARM.shoulder.volt);
        check_VOLTAGE(Right_ARM.shoulder.volt);
        // Right_ARM.shoulder.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Right_ARM.shoulder.volt = Ninety_Deg;
            Right_ARM.shoulder.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_ARM.shoulder.volt = One_Eighty;
            Right_ARM.shoulder.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_ARM.shoulder.volt = Three_Sixty;
            Right_ARM.shoulder.degree = 360;
        } 
    } else if(u8_User_Pick == 2) {
        printf("\nEnter voltage for Right Arm elbow:\n");
        scanf("%i", &Right_ARM.elbow.volt);
        check_VOLTAGE(Right_ARM.elbow.volt);
        // Right_ARM.elbow.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Right_ARM.elbow.volt = Ninety_Deg;
            Right_ARM.elbow.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_ARM.elbow.volt = One_Eighty;
            Right_ARM.elbow.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_ARM.elbow.volt = Three_Sixty;
            Right_ARM.elbow.degree = 360;
        } 
    } else if(u8_User_Pick == 3) {
        printf("\nEnter voltage for Right Arm finger:\n");
        scanf("%i", &Right_ARM.finger.volt);
        check_VOLTAGE(Right_ARM.finger.volt);
        // Right_ARM.finger.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Right_ARM.finger.volt = Ninety_Deg;
            Right_ARM.finger.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_ARM.finger.volt = One_Eighty;
            Right_ARM.finger.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_ARM.finger.volt = Three_Sixty;
            Right_ARM.finger.degree = 360;
        } 
    }
}

void Move_Left_ARM(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Right ARM:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        printf("\nEnter voltage for Left Arm shoulder:\n");
        scanf("%i", &Left_ARM.shoulder.volt);
        check_VOLTAGE(Left_ARM.shoulder.volt);
        // Left_ARM.shoulder.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Left_ARM.shoulder.volt = Ninety_Deg;
            Left_ARM.shoulder.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_ARM.shoulder.volt = One_Eighty;
            Left_ARM.shoulder.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_ARM.shoulder.volt = Three_Sixty;
            Left_ARM.shoulder.degree = 360;
        } 
    } else if(u8_User_Pick == 2) {
        printf("\nEnter voltage for Left Arm elbow:\n");
        scanf("%i", &Left_ARM.elbow.volt);
        check_VOLTAGE(Left_ARM.elbow.volt);
        // Left_ARM.elbow.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Left_ARM.elbow.volt = Ninety_Deg;
            Left_ARM.elbow.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_ARM.elbow.volt = One_Eighty;
            Left_ARM.elbow.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_ARM.elbow.volt = Three_Sixty;
            Left_ARM.elbow.degree = 360;
        } 
    } else if(u8_User_Pick == 3) {
        printf("\nEnter voltage for Left Arm finger:\n");
        scanf("%i", &Left_ARM.finger.volt);
        check_VOLTAGE(Left_ARM.finger.volt);
        // Left_ARM.finger.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Left_ARM.finger.volt = Ninety_Deg;
            Left_ARM.finger.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_ARM.finger.volt = One_Eighty;
            Left_ARM.finger.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_ARM.finger.volt = Three_Sixty;
            Left_ARM.finger.degree = 360;
        } 
    }
}

void Move_Right_LEG(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Right LEG:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        printf("\nEnter voltage for Right LEG waist:\n");
        scanf("%i", &Right_LEG.waist.volt);
        check_VOLTAGE(Right_LEG.waist.volt);
        // Right_LEG.waist.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Right_LEG.waist.volt = Ninety_Deg;
            Right_LEG.waist.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_LEG.waist.volt = One_Eighty;
            Right_LEG.waist.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_LEG.waist.volt = Three_Sixty;
            Right_LEG.waist.degree = 360;
        } 
    } else if(u8_User_Pick == 2) {
        printf("\nEnter voltage for Right LEG knee:\n");
        scanf("%i", &Right_LEG.knee.volt);
        check_VOLTAGE(Right_LEG.knee.volt);
        // Right_LEG.knee.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Right_LEG.knee.volt = Ninety_Deg;
            Right_LEG.knee.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_LEG.knee.volt = One_Eighty;
            Right_LEG.knee.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_LEG.knee.volt = Three_Sixty;
            Right_LEG.knee.degree = 360;
        } 
    } else if(u8_User_Pick == 3) {
        printf("\nEnter voltage for Right LEG foot:\n");
        scanf("%i", &Right_LEG.foot.volt);
        check_VOLTAGE(Right_LEG.foot.volt);
        // Right_LEG.foot.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Right_LEG.foot.volt = Ninety_Deg;
            Right_LEG.foot.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_LEG.foot.volt = One_Eighty;
            Right_LEG.foot.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_LEG.foot.volt = Three_Sixty;
            Right_LEG.foot.degree = 360;
        } 
    }
}

void Move_Left_LEG(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Left LEG:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        printf("\nEnter voltage for Left LEG waist:\n");
        scanf("%i", &Left_LEG.waist.volt);
        check_VOLTAGE(Left_LEG.waist.volt);
        // Left_LEG.waist.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Left_LEG.waist.volt = Ninety_Deg;
            Left_LEG.waist.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_LEG.waist.volt = One_Eighty;
            Left_LEG.waist.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_LEG.waist.volt = Three_Sixty;
            Left_LEG.waist.degree = 360;
        } 
    } else if(u8_User_Pick == 2) {
        printf("\nEnter voltage for Left LEG knee:\n");
        scanf("%i", &Left_LEG.knee.volt);
        check_VOLTAGE(Left_LEG.knee.volt);
        // Left_LEG.knee.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Left_LEG.knee.volt = Ninety_Deg;
            Left_LEG.knee.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_LEG.knee.volt = One_Eighty;
            Left_LEG.knee.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_LEG.knee.volt = Three_Sixty;
            Left_LEG.knee.degree = 360;
        } 
    } else if(u8_User_Pick == 3) {
        printf("\nEnter voltage for Left LEG foot:\n");
        scanf("%i", &Left_LEG.foot.volt);
        check_VOLTAGE(Left_LEG.foot.volt);
        // Left_LEG.foot.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", &u8_User_Pick_P);

        if(u8_User_Pick_P == 1) {
            Left_LEG.foot.volt = Ninety_Deg;
            Left_LEG.foot.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_LEG.foot.volt = One_Eighty;
            Left_LEG.foot.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_LEG.foot.volt = Three_Sixty;
            Left_LEG.foot.degree = 360;
        } 
    }
}

void Decryption_Process(void) {
        
    if(Read_Bit(Main_Driver.Encrypted, Right_ARM_Encryption) == 1) {
        Move_Right_ARM();
    } 
    if(Read_Bit(Main_Driver.Encrypted, Left_ARM_Encryption) == 1) {
        Move_Left_ARM();
    }
    if(Read_Bit(Main_Driver.Encrypted, Right_LEG_Encryption) == 1) {
        Move_Right_LEG();
    }
    if(Read_Bit(Main_Driver.Encrypted, Left_LEG_Encryption) == 1) {
        Move_Left_LEG();  
    }
}