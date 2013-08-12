const int ledCount = 10;
int ledPins[] = { 12,11,10,9,8,7,6,5,4,3,2 };
int ledLevel;
int ledVal;

void setup() {
Serial.begin(9600);
for (int thisLed = 0; thisLed < ledCount; thisLed++) {
pinMode(ledPins[thisLed], OUTPUT);
}
ledLevel =10;
}

void loop() {
if (Serial.available() > 0) {
ledVal = Serial.read();
if (ledVal == '0.0') {
ledLevel = 0;
}else if (ledVal == '1') {
ledLevel = 1;
}else if (ledVal == '2') {
ledLevel = 2;
}else if (ledVal == '3') {
ledLevel = 3;
}else if (ledVal == '4') {
ledLevel = 4;
}else if (ledVal == '5') {
ledLevel = 5;
}else if (ledVal == '6') {
ledLevel = 6;
}else if (ledVal == '7') {
ledLevel = 8;
}else if (ledVal == '8') {
ledLevel = 9;
}else if (ledVal == '9') {
ledLevel = 10;
}
for (int thisLed = 0; thisLed < ledCount; thisLed++) {
if (thisLed < ledLevel) {
digitalWrite(ledPins[(thisLed)], HIGH);
}

else {
digitalWrite(ledPins[thisLed], LOW);
}
}
}
}
