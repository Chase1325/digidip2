/*
@author Chase St. Laurent

Entities file for digidip2
*/


void clearDisplay() {
	digitalWrite(SSD, LOW);
	Serial.write(0x76); //clear display command
	digitalWrite(SSD, HIGH);
}

void error() {
	clearDisplay();
	Serial.println("SDEr");
	while (1);
}

void s7sSendStringSPI(String toSend) {
	digitalWrite(SSD, LOW);
	for (int i = 0; i < 4; i++) {
		SPI.transfer(toSend[i]);
	}
	digitalWrite(SSD, HIGH);
}
//

//----------------------------------------
//SAVING
void saveSample() {
	//save the sample taken
}

bool sampleSaved() {
	boolean saved = false;
	//TODO: if save button pressed, return true
	//if(saveButton pressed){
	//saved = true;
	//}
	return saved;
}
//----------------------------------------
//SENDING
void sendSample() {

}
void sendNewSampleSet() {

}
//----------------------------------------

void newSampleSet() {
	//bucketArray;
	date;
	time;
}

void back() {
	//returns user to previous screen
}

void selectTestType() {
	//Dependant on boundaries
	testType == "Residential";
	testType == "Commercial";

	if (testType == "Residential") {
		testTypeHolder = 0;
	}
	else if (testType == "Commercial") {
		testTypeHolder = 1;
	}
}

void selectTestTime() {
	//Dependant on boundaries

	//

}

void selectBucketArray() {

}

//--------------------------------------
//BUCKET RELATED CALCULATIONS

//return the number of buckets sampled
int bucketCount() {
	int bucketCount;
	if (sampleSaved()) {
		bucketCount++;
	}
	return bucketCount;
}

int updateDensity() {
	int newDensity;

	switch (testTypeHolder)
	{
	case 0://Residential
		newDensity = digiReading;//(MAY NEED TO SCALE)
		break;
	case 1: //Commercial
		newDensity = digiReading;//(MAY NEED TO SCALE)
		break;
	}
}

int density() {
	int density = updateDensity();
	return density;
}

int bucketNumber() {
	return NULL;
}