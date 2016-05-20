/*
@author Chase St. Laurent

Entities file for digidip2
*/


void clearDisplay() {
	//digitalWrite(SSD, LOW);
	Serial.write(0x76); //clear display command
						//	digitalWrite(SSD, HIGH);
}

void error() {
	clearDisplay();
	Serial.println("SDEr");
	while (1);
}

void s7sSendStringSPI(String toSend) {
	//digitalWrite(SSD, LOW);
	for (int i = 0; i < 4; i++) {
		SPI.transfer(toSend[i]);
	}
	//digitalWrite(SSD, HIGH);
}

//return the number of buckets sampled
int bucketNumber() {
	int numBuckets;
	if (sampleSaved()) {
		numBuckets++;
	}
	return numBuckets;
}

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


int updateDensity() {
	//calculate the density of the sample
}

void newSampleSet() {
	//create new list/array of samples
}

void eraseAll() {
	//erases all the sampled sets
}

void undoSample() {
	//erases density of current sample
}