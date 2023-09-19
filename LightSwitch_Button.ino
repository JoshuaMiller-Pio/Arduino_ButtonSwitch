
//
#pragma region 
const int buttonPin = 12;  
const int ledPin = 13;    
int buttonState = 0;  
#pragma endregion

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(13, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  //button is on port 12
  int buttonState = digitalRead(buttonPin);

//static must be used to keep value between loops
  static bool on = false;  
  //if button state is down and the switch is switched
  if (buttonState == LOW && on == true) {
    on = false;  
  } 
  else if (buttonState == LOW && on == false){
    
    on = true;   
  }

  if (on == true) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
//250 mil-sec delay for seemless switching
  delay(250);
}