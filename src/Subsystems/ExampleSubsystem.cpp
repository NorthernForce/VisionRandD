#include "ExampleSubsystem.h"
#include "../RobotMap.h"

ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	m_cam = new PIXYCam(SPI::kOnboardCS0);
}

void ExampleSubsystem::InitDefaultCommand()
{
 ;
}
