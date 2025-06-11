# TEMPERATURE-MONITORING-SYSTEM

*COMPANY* : CODTECH IT SOLUTION

*NAME* : AVANI D K

*INTERN ID* : CT04DG131

*DOMAIN* : EMBEDDED SYSYTEMS

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTOSH

# TASK DESCRIPTION

### Project Overview
This project demonstrates a simple and effective temperature monitoring system using an LM35 temperature sensor interfaced with an Arduino UNO and a 16x2 LCD display. The system continuously reads the ambient temperature and displays the value in Celsius on the LCD in real-time. This type of project is ideal for beginners in embedded systems and electronics, and serves as a foundational exercise in interfacing analog sensors and character displays with microcontrollers.

This setup is created and simulated in Tinkercad Circuits, an online electronics simulator that enables real-time emulation and testing of Arduino-based circuits.

### Objective
The main objective of this project is to:

Read temperature data from the LM35 analog temperature sensor.

Convert the analog voltage to a temperature value in Celsius.

Display the temperature on a 16x2 character LCD.

Ensure stable and legible visual output by optimizing the LCD contrast settings.

This project helps build core skills in:

Analog-to-digital conversion using Arduino’s ADC.

Sensor calibration and mathematical mapping.

Interfacing and programming LCD displays.

Debugging circuits virtually using Tinkercad.

### Components Used
Arduino UNO

LM35 Temperature Sensor

16x2 LCD Display (non-I2C)

10kΩ Potentiometer (optional for contrast)

Breadboard

Jumper Wires

Power Supply (5V via Arduino)

### Working Principle
The LM35 sensor outputs an analog voltage that is linearly proportional to temperature. It provides a voltage of 10mV/°C. This analog voltage is read by the Arduino through its analog input pin (A0). The Arduino processes the analog value and converts it to a temperature in Celsius using the formula:

cpp
Copy
Edit
Temperature (°C) = (Analog Value * 5.0 / 1023.0) * 100
This value is then displayed on a 16x2 LCD which is connected to the Arduino using digital pins 2 to 12 (RS, E, D4–D7). The LCD displays “Temp:” followed by the calculated temperature in degrees Celsius.

To ensure the display is clearly visible, the VO (contrast) pin of the LCD is tied directly to GND, as potentiometer simulation in Tinkercad may result in a faint or invisible display. This bypass guarantees maximum contrast.

### Code Logic
Initialize the LCD and sensor.

In the loop(), read the analog input from the LM35.

Convert the input to a Celsius value.

Clear previous output on LCD and print the new temperature.

Delay for 1 second and repeat.

This ensures continuous, real-time updates without flickering or ghost characters on the LCD screen.

### Testing in Tinkercad
This project has been tested in the Tinkercad environment. Users can open the simulation, start the Arduino, and observe real-time temperature updates. The virtual LM35 sensor can be manually adjusted in Tinkercad to test varying temperature inputs.

To make the LCD characters clearly visible:

Ensure LCD pin 3 (V0) is connected directly to GND instead of using a potentiometer.

### Applications
Home or room temperature monitoring

Educational electronics projects

Base module for smart thermostat systems

Introduction to embedded sensor interfaces

### Notes
This setup uses a standard (non-I2C) LCD, meaning more pins are required for data communication.

For real-world applications, calibration of the sensor may be required for accurate readings.

Consider using I2C-based LCD for pin efficiency in larger projects.

### Possible Extensions
Add a buzzer to alert when temperature exceeds a limit.

Display temperature in Fahrenheit alongside Celsius.

Add data logging to SD card or cloud using ESP8266.

Upgrade to I2C LCD to save digital pins.

Combine with a relay to control a fan or heater based on temperature.

# OUTPUT

![Image](https://github.com/user-attachments/assets/67caeacb-87fd-4eec-9d19-bcaf66a26656)
