/*
Name:		DigiDip2.ino
Created:	5/18/2016 12:26:47 PM
Author:	ChaseStLaurent
*/

//--------------------------------------
//IMPORT LIBRARIES
#include <Rtc_Pcf8563.h>//real-time clock
#include <gfxfont.h>
#include <Adafruit_GFX.h>
#include <SD.h>//Saving
#include <SPI.h>
#include <Wire.h>
#include <SoftwareSerial.h>//Serial/UART comms
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

char testType[12];
int testTypeHolder;
uint8_t testDuration = NULL;
volatile uint8_t cycle = 1;
int digiReading = NULL;

File logfile;

//---------------------------------------
//DATE & TIME
#define RTCC_DATE_US 0x04;
#define RTCC_TIME_HMS 0x01;

int date = RTCC_DATE_US;
int time = RTCC_TIME_HMS;

//---------------------------------------

//array bucketArray() {
//	return nullptr;
//}

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	delay(100);
	clearDisplay();

	logfile.print("Test Duration: ");
	logfile.print(testDuration);
	logfile.print(" mins, Test Type: ");
	logfile.print(testType);
	logfile.flush();//write to SD card
}

// the loop function runs over and over again until power down or reset
void loop() {
	
}