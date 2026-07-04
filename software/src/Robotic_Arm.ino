/*
------------------------------------------------------------
Project  : RoboPick
Title    : 3-DOF Robotic Manipulator for Automated Pick-and-Place
Platform : Arduino Uno
Language : Embedded C (Arduino)
Author   : Nandana Madhu

Description:
This program controls a 3-DOF robotic manipulator using
MG996R and SG90 servo motors. The arm performs a predefined
pick-and-place sequence by moving to a pickup position,
grasping an object, transporting it, releasing it, and
returning to the home position.

Note:
This code is a reconstructed reference implementation created
for repository documentation purposes.
------------------------------------------------------------
*/

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// --------------------------------------------------
// PCA9685 Initialization
// --------------------------------------------------

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// --------------------------------------------------
// Servo Channels
// --------------------------------------------------

#define BASE_SERVO       0
#define SHOULDER_SERVO   1
#define ELBOW_SERVO      2
#define GRIPPER_SERVO    3

// --------------------------------------------------
// Servo Pulse Range
// --------------------------------------------------

#define SERVO_MIN 150
#define SERVO_MAX 600

// --------------------------------------------------
// Function Prototypes
// --------------------------------------------------

void moveServo(uint8_t channel, int angle);
void homePosition();
void pickObject();
void placeObject();

// --------------------------------------------------
// Setup
// --------------------------------------------------

void setup()
{
  Serial.begin(9600);

  pwm.begin();
  pwm.setPWMFreq(50);      // 50Hz for servos

  delay(1000);

  Serial.println("RoboPick Initialized");

  homePosition();
}

// --------------------------------------------------
// Main Loop
// --------------------------------------------------

void loop()
{
  pickObject();

  delay(1000);

  placeObject();

  delay(3000);
}

// --------------------------------------------------
// Convert Angle to PWM Pulse
// --------------------------------------------------

void moveServo(uint8_t channel, int angle)
{
  int pulse = map(angle, 0, 180, SERVO_MIN, SERVO_MAX);

  pwm.setPWM(channel, 0, pulse);

  delay(600);
}

// --------------------------------------------------
// Home Position
// --------------------------------------------------

void homePosition()
{
  moveServo(BASE_SERVO, 90);
  moveServo(SHOULDER_SERVO, 90);
  moveServo(ELBOW_SERVO, 90);
  moveServo(GRIPPER_SERVO, 80);

  Serial.println("Home Position");
}

// --------------------------------------------------
// Pick Sequence
// --------------------------------------------------

void pickObject()
{
  Serial.println("Moving to Pick Position");

  moveServo(BASE_SERVO, 40);

  moveServo(SHOULDER_SERVO, 120);

  moveServo(ELBOW_SERVO, 60);

  Serial.println("Closing Gripper");

  moveServo(GRIPPER_SERVO, 20);

  delay(800);

  moveServo(SHOULDER_SERVO, 90);
}

// --------------------------------------------------
// Place Sequence
// --------------------------------------------------

void placeObject()
{
  Serial.println("Moving to Place Position");

  moveServo(BASE_SERVO, 140);

  moveServo(ELBOW_SERVO, 70);

  Serial.println("Opening Gripper");

  moveServo(GRIPPER_SERVO, 80);

  delay(800);

  homePosition();

  Serial.println("Cycle Complete");
}
