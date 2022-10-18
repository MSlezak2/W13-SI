#pragma once
#include "RadiationDetectorInterface.h"
#include "AudioBuzzerInterface.h"
#include "ElectronicDisplayInterface.h"

class Device {
public:
	Device();
	Device(RadiationDetectorInterface* radDet, ElectronicDisplayInterface* elDis, AudioBuzzerInterface* audBuz)
		: radiationDetector{ radDet }, electronicDisplay{ elDis }, audioBuzzer{ audBuz } {};
	void start();

private:
	RadiationDetectorInterface* radiationDetector;
	ElectronicDisplayInterface* electronicDisplay;
	AudioBuzzerInterface* audioBuzzer;
	void readValues();
	void displayValues();
	void startTheAlarm();
	bool isRadiationTooHigh();
	void cycle();
	double alphaRadiationLevel;
	double betaRadiationLevel;
	double gammaRadiationLevel;
	double const DANGEROUS_ALPHA_RADIATION_LEVEL = 10;
	double const DANGEROUS_BETA_RADIATION_LEVEL = 10;
	double const DANGEROUS_GAMMA_RADIATION_LEVEL = 10;


};

