<p align="center">
  <img src="images/robopick_banner.png" alt="RoboPick Banner" width="100%">
</p>

# 🤖 RoboPick: 3-DOF Robotic Manipulator for Automated Pick-and-Place Operations

A 3-DOF robotic manipulator developed using **Arduino Uno**, **MG996R/SG90 servo motors**, and a **PCA9685 PWM driver** to perform automated pick-and-place operations through predefined motion sequences. The project demonstrates robotic manipulation, servo coordination, and embedded systems programming, providing a low-cost educational platform for industrial automation concepts.


![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?logo=arduino)
![Language](https://img.shields.io/badge/Language-Embedded_C-blue)
![Servo Motors](https://img.shields.io/badge/Servo-MG996R%20%7C%20SG90-orange)
![PWM Driver](https://img.shields.io/badge/PCA9685-16_Channel-green)
![License](https://img.shields.io/badge/License-MIT-yellow)
![Status](https://img.shields.io/badge/Status-Documentation_Completed-brightgreen)


## 📑 Table of Contents

- [Project Overview](#project-overview)
- [Key Features](#key-features)
- [Project Highlights](#project-highlights)
- [Hardware Components](#hardware-components)
- [Software Stack](#software-stack)
- [Repository Structure](#repository-structure)
- [Working Principle](#working-principle)
- [System Architecture](#system-architecture)
- [Hardware Architecture](#hardware-architecture)
- [Software Architecture](#software-architecture)
- [Pick-and-Place Workflow](#pick-and-place-workflow)
- [Wiring Diagram](#wiring-diagram)
- [Installation](#installation)
- [Project Status](#project-status)
- [Future Improvements](#future-improvements)
- [License](#license)



# 📌 Project Overview

RoboPick is a 3-degree-of-freedom robotic manipulator designed to automate simple pick-and-place operations using servo motors and an Arduino Uno. The robot executes predefined motion sequences to grasp, transport, and release lightweight objects with repeatable precision.

The manipulator uses a combination of high-torque MG996R servos and SG90 micro servos controlled through a PCA9685 PWM driver, ensuring stable and synchronized movement across all joints. The project demonstrates the fundamentals of robotic manipulation, motion control, and embedded programming while serving as a foundation for future upgrades such as computer vision, inverse kinematics, and ROS 2 integration.



# ✨ Key Features

- 🤖 3-DOF robotic manipulator
- 📦 Automated pick-and-place operation
- ⚙️ Servo motor-based joint control
- 🎯 Predefined motion sequences
- 🔌 PCA9685 PWM driver for smooth servo control
- 💻 Arduino Uno embedded controller
- 🛠 Modular mechanical structure
- 📚 Educational robotics platform


# 🌟 Project Highlights

| Feature | Description |
|----------|-------------|
| 🤖 Robotic Manipulation | Automated pick-and-place operation |
| ⚙️ Servo Control | Smooth multi-servo coordination using PCA9685 |
| 🎯 Motion Planning | Predefined movement sequence |
| 📦 Object Handling | Pick, transport, and release lightweight objects |
| 💻 Embedded System | Arduino Uno based control |
| 🔧 Expandable Design | Future-ready for AI and ROS integration |



# 🔩 Hardware Components

| Component | Purpose |
|-----------|---------|
| Arduino Uno | Main controller |
| MG996R Servo Motors | Base and shoulder joints |
| SG90 Servo Motor | Wrist / gripper actuation |
| PCA9685 PWM Driver | Multi-servo PWM control |
| Mechanical Gripper | Object grasping |
| Acrylic Robotic Arm Kit | Mechanical structure |
| External 5V Power Supply | Servo power |



# 💻 Software Stack

| Software | Purpose |
|----------|---------|
| Arduino IDE | Program development |
| Embedded C | Robot control logic |
| Servo Library | Servo motor control |
| PCA9685 Library | PWM signal generation |



# 📂 Repository Structure

```text
RoboPick/

├── docs/
│   └── diagrams/
│       ├── 01_System_Architecture.svg
│       ├── 02_Hardware_Architecture.svg
│       ├── 03_Software_Architecture.svg
│       ├── 04_Pick_and_Place_Workflow.svg
│       ├── 05_Wiring_Diagram.svg
│       └── 06_Project_Workflow.svg
│
├── hardware/
│   ├── README.md
│   ├── Bill_of_Materials.md
│   ├── Hardware_Specifications.md
│   └── Power_Management.md
│
├── software/
│   ├── README.md
│   ├── Motion_Control.md
│   ├── Servo_Control.md
│   ├── System_Architecture.md
│   └── src/
│       ├── main.ino
│       ├── config.h
│       ├── servo_controller.h
│       ├── servo_controller.cpp
│       ├── pick_place_sequence.h
│       └── pick_place_sequence.cpp
│
├── images/
├── videos/
├── results/
│
├── README.md
├── PROJECT_STATUS.md
├── LICENSE
├── requirements.txt
└── .gitignore
```


# ⚙️ Working Principle

The robotic manipulator performs an automated pick-and-place operation by executing a predefined sequence of servo motor movements.

### Operation Sequence

1. 🏠 Initialize the robotic arm to the home position.
2. 📍 Move the arm to the predefined pick location.
3. 🤏 Close the gripper to securely grasp the object.
4. ⬆️ Lift the object from the pickup position.
5. ↪️ Rotate and move towards the predefined placement location.
6. 📦 Release the object by opening the gripper.
7. 🔄 Return the robotic arm to its home position, ready for the next cycle.

The Arduino Uno generates control commands for each servo motor through the PCA9685 PWM driver, ensuring synchronized and smooth joint movements throughout the operation.



# 🏗️ System Architecture

<p align="center">
  <img src="docs/diagrams/01_System_Architecture.svg" alt="System Architecture" width="1000">
</p>

The system architecture illustrates how the Arduino Uno coordinates with the PCA9685 PWM driver to control multiple servo motors, enabling the robotic manipulator to perform automated pick-and-place operations through predefined motion sequences.


# 🔩 Hardware Architecture

<p align="center">
  <img src="docs/diagrams/02_Hardware_Architecture.svg" alt="Hardware Architecture" width="1000">
</p>

The hardware architecture presents the physical components of the robotic manipulator, including the Arduino Uno, PCA9685 PWM driver, servo motors, external power supply, and the mechanical gripper.


# 💻 Software Architecture

# 💻 Software Architecture

<p align="center">
  <img src="docs/diagrams/03_Software_Architecture.svg" alt="Software Architecture" width="1000">
</p>

The software architecture follows a modular embedded design where initialization, servo control, motion planning, and the pick-and-place sequence are organized into separate logical components for improved readability and maintainability.



# 🤖 Pick-and-Place Workflow

<p align="center">
  <img src="docs/diagrams/04_Pick_and_Place_Workflow.svg" alt="Pick and Place Workflow" width="1000">
</p>

The robotic arm executes a predefined sequence consisting of initialization, object pickup, transportation, placement, and return to the home position, ensuring repeatable automated operation.



# 🔌 Wiring Diagram

<p align="center">
  <img src="docs/diagrams/05_Wiring_Diagram.svg" alt="Wiring Diagram" width="1000">
</p>

The wiring diagram illustrates the electrical connections between the Arduino Uno, PCA9685 PWM driver, servo motors, and external power supply required for reliable robotic arm operation.


# 🔄 Complete Project Workflow

<p align="center">
  <img src="docs/diagrams/06_Project_Workflow.svg" alt="Project Workflow" width="1000">
</p>

This workflow summarizes the complete lifecycle of the robotic manipulator, beginning with system initialization and ending with the successful completion of the pick-and-place task.


# 📊 Robot Specifications

| Parameter | Value |
|-----------|-------|
| Degrees of Freedom | 3 |
| Controller | Arduino Uno |
| Servo Motors | MG996R & SG90 |
| PWM Driver | PCA9685 (16-Channel) |
| Programming Language | Embedded C |
| Motion Type | Predefined Sequence |
| End Effector | Servo-actuated Mechanical Gripper |
| Application | Pick-and-Place Automation |
