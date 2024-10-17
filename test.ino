/* Author - Kartikey
 * Date - 22/5/2024
 * Project - Macro Pad K6 for Arduino Nano
 */

int buttonPin1 = 19; // Set all pins
int buttonPin2 = 18;
int buttonPin3 = 17;
int buttonPin4 = 16;
int buttonPin5 = 15;
int buttonPin6 = 14;
int buttonState1 = 0; // Default value of button state
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP); // Set pin type
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  buttonState1 = digitalRead(buttonPin1); // Read button press
  if (buttonState1 == LOW) {  
    Serial.println("Windows + 8");
    delay(100);
  }

  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == LOW) {
    Serial.println("Type email: kkthy17@gmail.com");
    delay(100);
  }

  buttonState3 = digitalRead(buttonPin3);
  if (buttonState3 == LOW) {
    Serial.println("Windows + 6");
    delay(100);
  }

  buttonState4 = digitalRead(buttonPin4);
  if (buttonState4 == LOW) {
    Serial.println("Ctrl + S");
    delay(100);
  }

  buttonState5 = digitalRead(buttonPin5);
  if (buttonState5 == LOW) {
    Serial.println("Ctrl + Shift + Esc");
    delay(100);
  }

  buttonState6 = digitalRead(buttonPin6);
  if (buttonState6 == LOW) {
    Serial.println("Alt + F4");
    delay(100);
  }

  delay(100);
}
