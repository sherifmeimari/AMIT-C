struct Finger {
    int volt;
    int degree;
};

struct Wrist {
    int volt;
    int degree;
    struct Finger *finger_ptr;
};

struct Elbow {
    int volt;
    int degree;
    struct Wrist *wrist_ptr;
};

struct Shoulder {
    int volt;
    int degree;
    struct Elbow *elbow_ptr;
};

struct Waist_END {
    int volt;
    int degree;
    struct Knee *knee_ptr;
};

struct Knee {
    int volt;
    int degree;
    struct Foot *foot_ptr;
};

struct Foot {
    int volt;
    int degree;
};

struct ARM {
    struct Shoulder shoulder;
    struct Elbow elbow;
    struct Wrist wrist;
    struct Finger finger;
} Left_ARM, Right_ARM;

struct LEG {
    struct Waist_END waist;
    struct Knee knee;
    struct Foot foot; 
} Right_LEG, Left_LEG;