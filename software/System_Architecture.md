# 🏗️ Software System Architecture

## Overview

The RoboPick software follows a simple layered architecture suitable for embedded robotic systems. Each layer performs a specific responsibility, resulting in a modular and maintainable design.

---

## Software Layers

### Application Layer

Responsible for executing the complete pick-and-place sequence.

Functions include:

- Start operation
- Execute movement sequence
- Coordinate servo actions

---

### Motion Control Layer

Controls the movement of each robotic joint using predefined angular positions.

Responsibilities:

- Base rotation
- Shoulder movement
- Elbow positioning
- Gripper control

---

### Hardware Interface Layer

Provides communication between the Arduino Uno and the PCA9685 PWM driver.

Responsibilities:

- PWM generation
- Servo signal transmission
- Hardware initialization

---

### Hardware Layer

Includes:

- Arduino Uno
- PCA9685 Servo Driver
- MG996R Servo Motors
- SG90 Servo Motor
- Mechanical Gripper

---

## Software Flow

System Initialization

↓

Servo Initialization

↓

Move to Pick Position

↓

Close Gripper

↓

Transport Object

↓

Release Object

↓

Return Home

↓

Repeat Cycle
