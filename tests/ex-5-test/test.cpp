#include "pch.h"
#include "../../ex-5/RadiationDetectorInterface.h"
#include "MockRadiationDetector.h"
#include "../../ex-5/ElectronicDisplayInterface.h"
#include "MockElectronicDisplay.h"
#include "MockAudioBuzzer.h"

TEST(DeviceTest, ReadValuesTest) {
	// mock
	//auto radiationDetector = new MockRadiationDetector();
	//TODO: Make it work with shared pointers
	auto radiationDetector
		= std::make_shared<::testing::StrictMock<MockRadiationDetector>>();
	//std::shared_ptr<MockRadiationDetector> radiationDetector = std::make_shared<::testing::StrictMock<MockRadiationDetector>>;

	//define expectation, that device.readValues() will call radiationDetector->read...() methods
	EXPECT_CALL(*radiationDetector, readAlphaRadiation()).Times(1);
	EXPECT_CALL(*radiationDetector, readBetaRadiation()).Times(1);
	EXPECT_CALL(*radiationDetector, readGammaRadiation()).Times(1);
	
	Device device(radiationDetector);
	device.readValues();

	////TODO: if it doesn't work (because of the above expectations of only 1 call) move it to another test 
	//EXPECT_EQ(device.getAlphaRadiationLevel(), );
}

TEST(DeviceTest, DisplayValuesTest) {

	auto electronicDisplay
		= std::make_shared<::testing::StrictMock<MockElectronicDisplay>>();

	EXPECT_CALL(*electronicDisplay, printText).Times(::testing::AtLeast(1));

	Device device(electronicDisplay);
	device.displayValues();
}

TEST(DeviceTest, AlarmStartTest) {
	
	auto audioBuzzer 
		= std::make_shared<::testing::StrictMock<MockAudioBuzzer>>();

	Device device(audioBuzzer);

	EXPECT_CALL(*audioBuzzer, soundAnAlarm()).Times(1);

	device.startTheAlarm();
}

TEST(DeviceTest, StartTest) {

	//mock all three components
	//TODO: Move them to the fixture class
	auto radiationDetector
		= std::make_shared<::testing::StrictMock<MockRadiationDetector>>();
	auto electronicDisplay
		= std::make_shared<::testing::StrictMock<MockElectronicDisplay>>();
	auto audioBuzzer
		= std::make_shared<::testing::StrictMock<MockAudioBuzzer>>();

	//expect that methods are called in following order: readAlpha, readBeta, readGamma, display().times(atleast1), (soundAnAlarm.times(atleast0)?)
	EXPECT_CALL(*radiationDetector, readAlphaRadiation());
	EXPECT_CALL(*radiationDetector, readBetaRadiation());
	EXPECT_CALL(*radiationDetector, readGammaRadiation());
	EXPECT_CALL(*electronicDisplay, printText).Times(::testing::AtLeast(1));
	EXPECT_CALL(*audioBuzzer, soundAnAlarm).Times(::testing::AnyNumber());

	//the actual testing
	Device device(radiationDetector, electronicDisplay, audioBuzzer);
	device.start();
}