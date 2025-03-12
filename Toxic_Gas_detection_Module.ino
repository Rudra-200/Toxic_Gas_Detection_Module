#include <TM1637Display.h> // Include TM1637 library

// Pin definitions for TM1637
#define CLK 4  // Clock pin connected to D4
#define DIO 5  // Data pin connected to D5

int Input = A0;
int Buzzer = A1;
int GreenLED = A2;
int RedLED = A3;
int value;
int MAX = 200;

// Initialize the display object
TM1637Display display(CLK, DIO);

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  pinMode(Input, INPUT);
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(Buzzer, OUTPUT);

  // Set brightness for TM1637 (0-7)
  display.setBrightness(5);
  // Clear the display
  display.clear();
}

void loop() {
  value = analogRead(A0); // Read analog input
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(value);
  delay(1000);
  
  // Display the sensor value on TM1637
  display.showNumberDec(value, false); // Show value without leading zeros

  if (value >= MAX) {
    digitalWrite(GreenLED, LOW);
    digitalWrite(RedLED, HIGH);
    digitalWrite(Buzzer, HIGH);
    delay(5000);
    digitalWrite(Buzzer, LOW);
    delay(6000);
  } else {
    digitalWrite(RedLED, LOW);
    digitalWrite(Buzzer, LOW);
    digitalWrite(GreenLED, HIGH);
  }
}
