/*
 Name:		Sketch1.ino
 Created:	9/27/2016 10:49:58 AM
 Author:	TMezzie23558
*/
int pin13 = 13;
// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(pin13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	digitalWrite(pin13, HIGH);
	delay(1000);
	digitalWrite(pin13, LOW);
	delay(1000);
}
