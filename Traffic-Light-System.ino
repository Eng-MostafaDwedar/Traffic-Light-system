// C++ code
//
int red=9;
int yellow=10;
int green=11;
int on=1000;

void setup() {
pinMode(red,1);
pinMode(yellow,1);
pinMode(green,1);
}

void loop() {
digitalWrite(red,1);
delay(on);
digitalWrite(yellow,1);
delay(on);
digitalWrite(yellow,0);
delay(on);
digitalWrite(yellow,1);
delay(on);
digitalWrite(yellow,0);
delay(on);
digitalWrite(yellow,1);
delay(on);
digitalWrite(yellow,0);
digitalWrite(red,0);
digitalWrite(yellow,0);
digitalWrite(green,1);
delay(on);
digitalWrite(green,0);
}