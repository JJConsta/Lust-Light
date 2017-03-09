/* 
Lust & Light 
Justice Stacey
Wearable Computing GDES-3015-001
OCAD University 
Created on March 1, 2017
*/
int LEDred = 13; 
int LEDwhite = 11; 
int analogPin = A0; 

void setup() {
  pinMode (LEDred, OUTPUT);
  pinMode (LEDwhite, OUTPUT);
  pinMode (analogPin, INPUT); 
  Serial.begin (9600);
}

void loop() {
 Serial.println(analogRead(0));
 if (analogRead(A0) < 1023 ) {
digitalWrite(13, HIGH);
digitalWrite(11, LOW);
} else {
digitalWrite(13, LOW);
digitalWrite(11, HIGH);
}
}
