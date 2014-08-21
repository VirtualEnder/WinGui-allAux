#define VTAILTHRUST sin(0.61)
// Roll, Pitch, Yaw
motor[0] = PIDMIX(+0,+1,-1); //REAR_1 CW
motor[1] = PIDMIX(-1,-1, -VTAILTHRUST); //FRONT_R CCW
motor[2] = PIDMIX(+0,+1,+1); //REAR_2 CCW
motor[3] = PIDMIX(+1,-1, +VTAILTHRUST); //FRONT_L CW
