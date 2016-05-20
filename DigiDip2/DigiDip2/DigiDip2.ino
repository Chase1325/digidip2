/*
Name:		DigiDip2.ino
Created:	5/18/2016 12:26:47 PM
Author:	ChaseStLaurent
*/

//--------------------------------------
//IMPORT LIBRARIES
#include <SD.h>
#include <SPI.h>
#include <Wire.h>
#include <SoftwareSerial.h>
//--------------------------------------

//--------------------------------------
//BUTTON SETUP

//Save button connected to digital pin 3
#define saveButton 3
//Power button connected to digital pin 5
#define	powerButton 5
//Undo button connected to digital pin 6    
#define	undoButton 6
//Erase All button connected to digital pin 9
#define eraseAllButton 9
//New Set button connected to digital pin 10
#define newSetButton 10
//----------------------------------------

char tempString[10];
int sample[];

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	delay(100);
	clearDisplay();
}

// the loop function runs over and over again until power down or reset
void loop() {
}