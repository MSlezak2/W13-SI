#pragma once
#include "pch.h"
#include "../../ex-5/AudioBuzzerInterface.h"

class MockAudioBuzzer : public AudioBuzzerInterface {
public:
	MOCK_METHOD(void, soundAnAlarm, (), (override));
};