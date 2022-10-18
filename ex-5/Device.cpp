#include "Device.h"

void Device::start() {

	while (true) {
		readValues();
		displayValues();
		if (isRadiationTooHigh()) {
			startTheAlarm();
		}
	}

}
