# ⚡ Power Management

## Overview

The RoboPick robotic manipulator uses separate power sources for the controller and servo motors to ensure reliable operation.

---

## Power Distribution

### Arduino Uno

- Powered via USB during programming.
- Can also be powered using an external DC adapter.

---

### Servo Motors

The MG996R and SG90 servo motors are powered through an external regulated 5V supply connected to the PCA9685 PWM driver.

This prevents excessive current draw from the Arduino Uno.

---

## Advantages

- Stable servo operation
- Reduced voltage drops
- Improved motion reliability
- Better protection for the Arduino Uno

---

## Safety Recommendations

- Use a regulated 5V power supply.
- Ensure common ground between the Arduino Uno and the PWM driver.
- Avoid powering high-torque servos directly from the Arduino 5V pin.
