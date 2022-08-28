#pragma once

#include "pch.h"
#include "../../ex-5/RadiationDetectorInterface.h"

class MockRadiationDetector : public RadiationDetectorInterface {
public:
	MOCK_METHOD(double, readAlphaRadiation, (), (override));
	MOCK_METHOD(double, readBetaRadiation, (), (override));
	MOCK_METHOD(double, readGammaRadiation, (), (override));
};