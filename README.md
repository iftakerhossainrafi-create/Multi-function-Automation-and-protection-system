# Multi-function-Automation-and-protection-system

Project Objectives:

  1. To develop a low-cost smart automation and security system using a microcontroller-based platform.
  2. To provide secure access control through password authentication and automated door locking mechanisms.
  3. To detect unauthorized motion and generate security alerts using PIR sensors and buzzers.
  4. To monitor environmental conditions such as temperature and humidity and automatically control appliances like fans.
  5. To integrate multiple sensors and actuators into a single intelligent system for enhanced convenience and safety.
  6. To apply embedded systems, sensor interfacing, and automation concepts learned in the course to solve real-world problems.

Equipments Used
  1. Arduino UNO
  2. Breadboard
  3. Jumper Wires and Resistors
  4. I2C LCD Display (16x2)
  5. Servo Motor
  6. DC Fan
  7. LEDs (3 pcs)
  8. Keypad (4x4)
  9. PIR Sensor
  10. DTH11 Sensor
  11. Buzzer
  12. Power Supply (5V)

Circuit Diagram

<img width="1081" height="667" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/dc856665-48b9-484e-8232-65a4f6922a6e" />

Circuit Setup

<img width="1269" height="683" alt="Circuit Setup" src="https://github.com/user-attachments/assets/7c9c6597-5868-43cc-ae2b-0563945b8a5d" />

Wiring Description

  1. Arduino UNO Board (base controller)
  2. LCD (16x2 with I2C module)

     a. VCC → 5V
     b. GND → GND
     c. SDA → A4
     d. SCL → A5
     
  3. Keypad (4x4 Matrix)

     a. Row Pins → Arduino digital pins 9, 8, 7, 6
     b. Column Pins → Arduino digital pins 5, 4, 3, 2
  4. Servo Motor (for Door Lock

     a. VCC (Red) → 5V (better external 5V if servo draws high current)
     b. GND (Brown/Black) → GND
     c. Signal (Orange/Yellow) → Arduino A2
     
  5. PIR Motion Sensor

     a. VCC → 5V
     b. GND → GND
     c. OUT → Arduino A0






