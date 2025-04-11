# Ultrasonic Distance Alert System

This project uses an ultrasonic sensor with an Arduino to measure the distance of an object. If an object comes closer than 25 cm, two buzzers and an LED are triggered to alert the user.

## 🧠 Features

- Measures distance using an HC-SR04 ultrasonic sensor
- Activates two buzzers and an LED when the object is too close
- Displays distance in centimeters via Serial Monitor

## 🔧 Components Used

- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- 2 x Buzzers (connected to D3 and D5)
- 1 x LED (connected to D4)
- Resistors (220Ω for LED)
- Jumper wires
- Breadboard

## 📌 Pin Configuration

| Component      | Arduino Pin |
|----------------|-------------|
| Trig (Sensor)  | D9          |
| Echo (Sensor)  | D10         |
| Buzzer 1       | D3          |
| Buzzer 2       | D5          |
| LED            | D4          |

## 📜 Code Overview

- Triggers the ultrasonic pulse and measures the echo time.
- Calculates the distance in centimeters and inches.
- If the distance is less than 25 cm:
  - Turns ON both buzzers and the LED.
- Otherwise:
  - Turns them OFF.

## 🚀 Getting Started

1. Connect the components as per the pin configuration.
2. Upload the code to your Arduino using the Arduino IDE.
3. Open the Serial Monitor (9600 baud) to see the distance readings.

## 🧾 License

This project is open-source and free to use.
