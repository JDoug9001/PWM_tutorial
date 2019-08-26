//PWM Tutorial 
/*
  Button
  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int Counter = 1;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
  Counter++ ; //Increment Counter   
    if (Counter>3){
    Counter=1;
    }

switch (Counter) {
  case 1 :
     analogWrite(ledPin, 64);
    delay (125);
    analogWrite(ledPin, 127);
    delay (125);
    analogWrite(ledPin, 191);
    delay (125);
    analogWrite(ledPin, 255);
    delay (125);
    analogWrite(ledPin, 191);
    delay (125);
    analogWrite(ledPin, 127);
    delay (125);
    analogWrite(ledPin, 64);
    delay (125);
    analogWrite(ledPin, 64);
    delay (250);
    analogWrite(ledPin, 127);
    delay (250);
    analogWrite(ledPin, 191);
    delay (250);
    analogWrite(ledPin, 255);
    delay (250);
    analogWrite(ledPin, 191);
    delay (250);
    analogWrite(ledPin, 127);
    delay (250);
    analogWrite(ledPin, 64);
    delay (250);
    analogWrite(ledPin, 64);
    delay (500);
    analogWrite(ledPin, 127);
    delay (500);
    analogWrite(ledPin, 191);
    delay (500);
    analogWrite(ledPin, 255);
    delay (500);
    break;

  case 2 :
    for(int value = 0; value<=255; value++){
    analogWrite(ledPin, value);
    delay(10);
    for (value = 255){
      value = 0;
    }
    }
    break;
    
    case 3 :
    for(int value = 255; value>=0; value--){
    analogWrite(ledPin, value);
    delay(10);
    for (value = 0){
      value = 255;
    } 
    break;

  default:
   analogWrite(ledPin, 0); // statements
    break;
}
}
  }
}