# Solar-Based Smart Street Light with Motion Detection 🌞💡

## Overview
This project demonstrates an energy-efficient smart street light system powered by solar energy. The light remains off during the night unless a human passes by, detected by a PIR motion sensor. This setup ensures minimal power consumption and longer battery life.

## Features
- **Motion-Activated Lighting:** The light turns on only when motion is detected in the dark.
- **Energy Efficiency:** Solar-powered, with intelligent lighting based on human presence.
- **Low Power Consumption:** Ideal for remote areas with limited electricity access.

## Technologies Used
- **Microcontroller:** Arduino
- **Sensors:** PIR Motion Sensor, LDR
- **Power Source:** Solar Panel with Battery Backup
- **Programming Language:** C++

## How It Works
1. During the day, the solar panel charges the battery.
2. At night, the LDR detects darkness, activating the motion detection system.
3. When a human passes by, the PIR sensor detects motion and turns on the light for a specified duration.
4. If no further motion is detected, the light turns off to save power.

## Installation
1. **Hardware Setup:**
   - Connect the solar panel, battery, LDR, and PIR sensor as per the circuit schematic in the `Hardware` folder.
2. **Code:**
   - Upload the code from the `Code` folder to the Arduino.
3. **Test:**
   - Place the setup in a dark environment and simulate motion in front of the PIR sensor.

## Circuit Diagram
Refer to the `Hardware/circuit_diagram.png` file for a detailed wiring schematic.

## Media
### Prototype in Action
![Prototype Working]

## Future Scope
- **Adjustable Sensitivity:** Allow users to modify the PIR sensor’s sensitivity.
- **IoT Integration:** Add remote control and monitoring using Wi-Fi or Bluetooth.
- **Weatherproof Design:** Enhance durability for outdoor applications.

## License
This project is licensed under the MIT License. Feel free to use and improve upon it!

---
