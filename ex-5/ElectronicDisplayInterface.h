#pragma once
#include <string>

class ElectronicDisplayInterface {
public:
	virtual ~ElectronicDisplayInterface() {};
	virtual void printText(std::string text) = 0;
};

