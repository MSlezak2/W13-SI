#pragma once

#include "pch.h"
#include "../../ex-5/ElectronicDisplayInterface.h"


class MockElectronicDisplay : public ElectronicDisplayInterface {
public:
	MOCK_METHOD(void, printText, (std::string text), (override));
};