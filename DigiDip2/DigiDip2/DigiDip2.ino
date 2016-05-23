/*
Name:		DigiDip2.ino
Created:	5/18/2016 12:26:47 PM
Author:	ChaseStLaurent
*/

//--------------------------------------
//IMPORT LIBRARIES
#include <gfxfont.h>
#include <Adafruit_GFX.h>
#include <SD.h>
#include <SPI.h>
#include <Wire.h>
#include <SoftwareSerial.h>
//--------------------------------------

//--------------------------------------
//BUTTON SETUP

//Analog 8-11 are available
//Save button connected to analog pin 8
#define saveButton A8
//Select button connected to analog pin 9
//#define selectButton 9
//
const uint8_t SSSD = 53;
const uint8_t SSD = 52;
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