# **Gas Toxicity detection with Alert System**

## **Overview**
This project utilizes an Arduino to read sensor values from an analog input and display them on a **TM1637 4-digit 7-segment display**. It also includes an **alert system** with a **buzzer, a green LED, and a red LED**, which provide a visual and auditory warning when the sensor value exceeds a predefined threshold.

---

## **Components Used**
- **Arduino Board** (e.g., Arduino Uno, Mega, Nano)
- **TM1637 4-Digit 7-Segment Display**
- **Analog Sensor** (connected to A0)
- **Buzzer** (connected to A1)
- **Green LED** (connected to A2)
- **Red LED** (connected to A3)
- **Resistors** (as required)
- **Jumper Wires**
- **Power Supply**

---

## **Pin Configuration**

| **Component**   | **Pin Connection** |
|----------------|------------------|
| TM1637 CLK    | D4               |
| TM1637 DIO    | D5               |
| Sensor Input  | A0               |
| Buzzer        | A1               |
| Green LED     | A2               |
| Red LED       | A3               |

---

## **Code Explanation**

### **Library Inclusion**
- The `TM1637Display.h` library is used to control the TM1637 display.

### **Pin Setup**
- The sensor, buzzer, and LEDs are assigned to specific pins.

### **Setup Function**
- Initializes serial communication.
- Configures the input and output pins.
- Sets the brightness of the TM1637 display.

### **Loop Function**
1. Reads the sensor value.
2. Displays the sensor value on the TM1637 display.
3. If the value exceeds the defined `MAX` (200):
   - The red LED turns on.
   - The buzzer sounds for 5 seconds and then turns off.
4. If the value is below `MAX`, the green LED remains on.

---

## **Installation and Usage**
1. Connect the components as per the pin configuration.
2. Upload the provided Arduino code to your board.
3. Open the **Serial Monitor** to view real-time sensor readings.
4. Observe the **LED and buzzer behavior** based on the sensor value.

---

## **Dependencies**
Ensure that the following libraries are installed in your **Arduino IDE**:
- `TM1637Display` (Install via Library Manager)

---

## **Customization**
- Modify the `MAX` variable to change the threshold value.
- Adjust the **buzzer delay timings** for different alert durations.
- Experiment with different sensor types for varied applications.

---

## **Applications**
- **Environmental monitoring** (e.g., temperature, gas detection)
- **Industrial safety systems**
- **Home automation and security alerts**
- **IoT-based sensor displays**

---

## **License**
This project is **open-source**. You are free to modify and use it for **educational and personal projects**.
