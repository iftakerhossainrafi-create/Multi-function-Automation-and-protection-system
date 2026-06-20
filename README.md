# Multi-function-Automation-and-protection-system

Project Objectives:

  1. To develop a low-cost smart automation and security system using a microcontroller-based platform.
  2. To provide secure access control through password authentication and automated door locking mechanisms.
  3. To detect unauthorized motion and generate security alerts using PIR sensors and buzzers.
  4. To monitor environmental conditions such as temperature and humidity and automatically control appliances like fans.
  5. To integrate multiple sensors and actuators into a single intelligent system for enhanced convenience and safety.
  6. To apply embedded systems, sensor interfacing, and automation concepts learned in the course to solve real-world problems.

__________________________________________________________________________________________________________________

Equipments Used : 

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

_______________________________________________________________________________________________________

Circuit Diagram :

<img width="1081" height="667" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/dc856665-48b9-484e-8232-65a4f6922a6e" />

_______________________________________________________________________________________________________

Circuit Setup :

<img width="1269" height="683" alt="Circuit Setup" src="https://github.com/user-attachments/assets/7c9c6597-5868-43cc-ae2b-0563945b8a5d" />

_______________________________________________________________________________________________________

Wiring Description :

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
     
  6. Buzzer
     
     a. + → Arduino 12
     
     b. --→ GND
     
  7. LEDs
     
     a. Green LED (Door Open status) → Pin 10 (through 220Ω resistor to GND)
     
     b. Red LED (Door Locked status) → Pin 11 (through 220Ω resistor to GND)
     
     c. Buzzer Status LED → Pin 13 (through 220Ω resistor to GND)
     
  8. Fan (Small DC Fan or Relay controlled Fan)
     
     a. Fan + → Arduino A3 (via a transistor driver circuit, e.g., TIP122 + diode for protection, because Arduino pin can’t directly drive a fan)
     
     b. Fan --→ GND
     
  9. DHT11 Sensor
      
     a. VCC → 5V
     
     b. GND → GND
     
     c. OUT → Arduino A1

_______________________________________________________________________________________________________

MOTIVE OF THE PROJECT

   1. To solve real life problem
      
   2. To create a low cost smart security system
      
   3. To create a low cost smart environment controlling system
    
   4. To apply what we learned from the course

_______________________________________________________________________________________________________

SUMMARY : 

The motive of the project is to design a smart, low cost and reliable microcontroller based automation and security system that detects motion, monitors environmental conditions, ensures access control through password authentication and automatically controls appliances like fans and doors.

_______________________________________________________________________________________________________

POSSIBLE APPLICATIONS :

   1. Smart Climate Control: DHT11 data can automatically run the fan to maintain comfortable temperature/humidity.
      
   2. Home or Office Security: PIR detects movement and triggers password verification before granting access.
      
   3. Automation Learning Platform: A great educational project for learning Arduino, sensors and home automation basics.

_______________________________________________________________________________________________________

FUTURE AND POSSIBLE ADVANCEMENT :

   1. Smarter Security System : Use of fingerprint sensors, retina detector and NFC can make the system more efficient.
     
   2. Effective Automation System: Project can be extended into complete home automation system that can control lights, air conditioner and heater.

   3. Remote Monitoring: Connecting the system to internet, the system can be controlled remotely.

   4. Smart AI based Lifestyle : Application of AI can make the system smarter.

   5. Affordability and availability: There are already so advanced, high tech security and automation systems already which are often used in banks, star marked hotels and important offices which are costly enough. But this microcontroller based system can be affordable and available for general people to use in their daily lives even after more advancement.

_______________________________________________________________________________________________________


