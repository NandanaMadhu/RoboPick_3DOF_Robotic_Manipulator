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
