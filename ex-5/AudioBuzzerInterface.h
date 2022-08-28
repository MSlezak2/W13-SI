#pragma once

class AudioBuzzerInterface {
public:
	virtual ~AudioBuzzerInterface() {};
	virtual void soundAnAlarm() = 0;
};

