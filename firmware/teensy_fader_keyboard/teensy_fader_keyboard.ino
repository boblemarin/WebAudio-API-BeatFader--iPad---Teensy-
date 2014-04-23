#define FADER1 0
#define FADER2 1

int tmp;
int value1 = 0;

void setup() {

  
}

void loop() {
  tmp = analogRead( FADER1 )/128;
  
  if ( tmp != value1 ) {
     value1 = tmp;
     Keyboard.set_key1(KEY_B+value1);
     Keyboard.send_now();
     delay(5);
     Keyboard.set_key1(0);
     Keyboard.send_now();
     //Keyboard 
     //Serial.println(KEY_A+value1);
  }
  delay(10);
}
