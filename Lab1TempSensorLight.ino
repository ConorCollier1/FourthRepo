/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe
  modified 02 Feb 2022
  by Conor Collier


  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int ledPin =  3;      // the number of the LED pin
const int Temp = A0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
   
}

void loop() {
  // read the temperature of the sensor:
   int sensorValue = analogRead(A0);
   // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  // check if the temp is above 550:
  if (sensorValue > 550) 
  {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
