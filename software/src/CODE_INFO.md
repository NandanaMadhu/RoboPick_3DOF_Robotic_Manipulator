# Robotic Arm Control Code

## Overview

This directory contains a reconstructed reference implementation of the RoboPick control software.

The original Arduino source code developed during the academic project was unavailable. This implementation recreates the overall software structure and demonstrates the predefined pick-and-place sequence performed by the robotic manipulator.

## Functional Overview

- Initializes the PCA9685 PWM Servo Driver
- Controls four servo channels
- Moves the robotic arm to the pickup position
- Closes the gripper to grasp an object
- Transports the object to the placement position
- Opens the gripper
- Returns to the home position

## Libraries Used

- Wire.h
- Adafruit_PWMServoDriver.h

## Platform

- Arduino Uno
- Embedded C (Arduino IDE)

> **Note:** This code is intended as a reference implementation for documentation purposes and is not the original project source code.
