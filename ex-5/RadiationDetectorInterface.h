#pragma once

class RadiationDetectorInterface {
public:
	virtual ~RadiationDetectorInterface() {} // Documentation says that it's necessary (virtual destructor)
	virtual double readAlphaRadiation() = 0;
	virtual double readBetaRadiation() = 0;
	virtual double readGammaRadiation() = 0;
};

