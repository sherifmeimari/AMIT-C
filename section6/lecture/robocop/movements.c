#include <stdio.h>
#include <stdlib.h>
#include "robo.h"

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
            printf("If you want another Selection Press 5:");
            scanf("%i", u8_User_Pick == 1);
            printf("\n");

            if(u8_User_Pick == 1) {
                Send_Order();
            } else if(u8_User_Pick == 2) {
                break;
            } else {
                printf("\nPlease Re-Define your purpose.\n");
            }
            
        }
        Encrypted_Order();
    }

void Controller_Init(void) {
    CO.HC = &Main_Driver;
}

void Encryption_Process(void) {
    Selection_of_Orders();
    Encrypted_Order();
}

void Decryption_Process(void) {
        
    if(Read_Bit(Main_Driver.Encrypted, Right_ARM_Encryption) == 1) {
        Move_Right_ARM();
    } 
    if(Read_Bit(Main_Driver.Encrypted, Left_ARM_Encryption) == 1) {
        Move_Right_ARM();
    }
    if(Read_Bit(Main_Driver.Encrypted, Right_LEG_Encryption) == 1) {
        Move_Left_LEG();
    }
    if(Read_Bit(Main_Driver.Encrypted, Left_LEG_Encryption) == 1) {
        Move_Right_LEG();  
    }
}

void Move_Right_ARM(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Right ARM:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        Right_ARM.shoulder.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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
        Right_ARM.elbow.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

        if(u8_User_Pick_P == 3) {
            Right_ARM.elbow.volt = Ninety_Deg;
            Right_ARM.elbow.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_ARM.elbow.volt = One_Eighty;
            Right_ARM.elbow.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_ARM.elbow.volt = Three_Sixty;
            Right_ARM.elbow.degree = 360;
        } 
    } else if(u8_User_Pick == 4) {
        Right_ARM.finger.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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
        Left_ARM.shoulder.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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
        Left_ARM.elbow.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

        if(u8_User_Pick_P == 3) {
            Left_ARM.elbow.volt = Ninety_Deg;
            Left_ARM.elbow.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_ARM.elbow.volt = One_Eighty;
            Left_ARM.elbow.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_ARM.elbow.volt = Three_Sixty;
            Left_ARM.elbow.degree = 360;
        } 
    } else if(u8_User_Pick == 4) {
        Left_ARM.finger.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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

void Move_Left_LEG(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Left LEG:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        Left_LEG.waist.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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
        Left_LEG.knee.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

        if(u8_User_Pick_P == 3) {
            Left_LEG.knee.volt = Ninety_Deg;
            Left_ARM.knee.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Left_LEG.knee.volt = One_Eighty;
            Left_LEG.knee.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Left_LEG.knee.volt = Three_Sixty;
            Left_LEG.knee.degree = 360;
        } 
    } else if(u8_User_Pick == 4) {
        Left_LEG.foot.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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

void Move_Right_LEG(void) {
    u8 u8_User_Pick;
    printf("\nPick the movement sequence of Right LEG:");
    scanf("%i", &u8_User_Pick);

    if(u8_User_Pick == 1) {
        Right_LEG.waist.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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
        Right_LEG.knee.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

        if(u8_User_Pick_P == 3) {
            Right_LEG.knee.volt = Ninety_Deg;
            Right_ARM.knee.degree = 90;
        } else if(u8_User_Pick_P == 2) {
            Right_LEG.knee.volt = One_Eighty;
            Right_LEG.knee.degree = 180;
        } else if(u8_User_Pick_P == 3) {
            Right_LEG.knee.volt = Three_Sixty;
            Right_LEG.knee.degree = 360;
        } 
    } else if(u8_User_Pick == 4) {
        Right_LEG.foot.volt = 5;
        u8 u8_User_Pick_P;
        printf("\nPlease pick the degree:\n");
        scanf("%i", u8_User_Pick_P);

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