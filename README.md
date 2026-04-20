# Smart-Energy-Meter-IOT-based-
⚡ Smart Energy Meter using ESP32 (IoT Based)
📌 Overview

This project implements a Smart Energy Meter using the ESP32 microcontroller to measure, monitor, and control electrical energy consumption in real time. It integrates IoT capabilities using the Blynk platform, allowing remote monitoring and appliance control via a mobile app.

🎯 Aim

To develop a smart energy meter that:

Measures electrical parameters in real time
Calculates power and energy consumption
Enables remote monitoring and control using IoT
🚀 Features
📊 Real-time voltage and current monitoring
⚡ Power and energy consumption calculation
📱 Remote access via Blynk mobile app
🔌 Load control using relay module
🛡️ Overload protection system
🌐 Wi-Fi enabled (ESP32)
🧰 Hardware Components
ESP32 Development Board
ZMPT101B Voltage Sensor Module
ACS712 Current Sensor Module
Relay Module
Breadboard
Jumper Wires
AC Bulb (Load)
5V Power Supply
💻 Software Requirements
Arduino IDE
Embedded C / Arduino Programming
Blynk IoT Platform
⚙️ Working Principle
Voltage Measurement
ZMPT101B sensor measures AC voltage
Current Measurement
ACS712 sensor measures current flow
Data Processing (ESP32)
Reads analog signals
Calculates:
Voltage (V)
Current (I)
Power (P = V × I)
Energy consumption
IoT Communication
Sends real-time data to Blynk via Wi-Fi
User Control
Monitor values on mobile app
Turn load ON/OFF remotely
Relay Operation
Controls AC load based on user input or conditions
📊 Formula Used
Power Calculation:
P = V × I
📱 IoT Integration
Real-time monitoring using Blynk App
Remote switching of appliances
Live display of:
Voltage
Current
Power
Energy
🔍 Applications
Smart homes
Energy monitoring systems
Industrial power management
IoT-based automation
📸 Prototype
Includes a working model with sensors, ESP32, and relay controlling a bulb load
📚 Learning Outcomes
Understanding of embedded systems (ESP32)
Sensor interfacing (Voltage & Current sensors)
Practical knowledge of energy measurement
IoT application development using Blynk
Implementation of smart monitoring systems
🧑‍💻 Author

Harmanpreet Singh
MCA – Semester 4
