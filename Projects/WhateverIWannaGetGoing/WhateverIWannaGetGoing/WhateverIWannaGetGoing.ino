/*
 Name:		WhateverIWannaGetGoing.ino
 Created:	9/7/2016 11:03:16 AM
 Author:	tmezzie23558
*/
int ledPin10 = 10;
// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(ledPin10, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	digitalWrite(ledPin10, HIGH);
	delay(2000);
	digitalWrite(ledPin10, LOW);
	delay(2000);
}