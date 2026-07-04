#ifndef CONFIG_H
#define CONFIG_H

// Servo Channels (PCA9685)
#define BASE_SERVO       0
#define SHOULDER_SERVO   1
#define ELBOW_SERVO      2
#define GRIPPER_SERVO    3

// Home Position
#define BASE_HOME        90
#define SHOULDER_HOME    90
#define ELBOW_HOME       90
#define GRIPPER_OPEN     80
#define GRIPPER_CLOSE    20

// Motion Delay (ms)
#define SERVO_DELAY      600

#endif
