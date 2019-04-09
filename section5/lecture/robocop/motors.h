struct Arm_Driver {
    int volt;
    struct ARM *Arm_Driver_ptr;
};

struct Leg_Driver {
    int volt;
    struct LEG *Leg_Driver_ptr;
};

struct Driver {
    // data encrypted
    u8 Encrypted;
    struct Arm_Driver Left_Arm_Driver;
    struct Arm_Driver Right_Arm_Driver;
    struct Leg_Driver Left_Leg_Driver;
    struct Leg_Driver Right_Leg_Driver;
} Main_Driver;
