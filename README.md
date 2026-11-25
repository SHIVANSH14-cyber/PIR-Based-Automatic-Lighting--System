PIR-Based Automatic Lighting System

1. Project Overview

The PIR-Based Automatic Lighting System is designed to automatically control lighting using a Passive Infrared (PIR) sensor. It detects human movement and switches the light ON through a relay module.

2. Objectives

- To automate lighting using motion detection.
- To reduce unnecessary electricity consumption.
- To understand Arduino-based automation.
- To develop a practical sensor-based project.

3. Hardware Requirements

- Arduino Uno R3
- HC-SR501 PIR Motion Sensor
- 5V Relay Module
- LED
- 220Ω Resistor
- Buzzer (Optional)
- Jumper Wires
- Breadboard and connecting accessories

4. Software Requirements

- Arduino IDE
- Arduino C/C++ Programming
- Arduino Uno Board

5. Working Principle

The PIR sensor detects movement by sensing changes in infrared radiation. When movement is detected, it sends a signal to the Arduino Uno.

The Arduino processes this signal and activates the relay module to control the lighting system. An LED indicator and buzzer can also provide visual and audio indications.

When no further movement is detected within the programmed time, the system switches the light OFF.

6. Pin Connections

Component| Arduino Pin
PIR OUT| D2
Relay IN| D8
LED| D13
Buzzer| D9
PIR VCC| 5V
Relay VCC| 5V
Common Ground| GND

7. Implementation

The hardware components were connected according to the circuit diagram. Arduino IDE was used to upload the program to the Arduino Uno. After assembling the components, the system was tested for motion detection and automatic lighting operation.

8. Testing and Results

The assembled system was tested successfully. The PIR sensor detected movement, and the Arduino controlled the relay module accordingly. The automatic lighting operation was observed during testing.

9. Applications

- Homes and rooms
- Corridors and staircases
- Offices
- Parking areas
- Energy-saving lighting systems

10. Future Scope

- Integration with IoT technology.
- Mobile application-based monitoring.
- Smart home automation.
- Improved energy monitoring.

11. Conclusion

The PIR-Based Automatic Lighting System demonstrates the practical application of sensors, microcontrollers, and relay-based automation. The project provides an effective approach to automatic lighting control and helps understand the fundamentals of embedded systems.
