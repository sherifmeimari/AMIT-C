#define Volt_High 5
#define Volt_Low 0
#define Volt_Max 15
#define Ninety_Deg 10
#define One_Eighty 12
#define Three_Sixty 15
#define Set_Bit(Reg, Position) (Reg|(1<<Position))
#define Right_ARM_Encryption 0
#define Left_ARM_Encryption 1
#define Right_LEG_Encryption 2
#define Left_LEG_Encryption 3
#define Read_Bit(Reg, Position) ((Reg>>Position)&(1))
