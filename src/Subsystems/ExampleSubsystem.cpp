#include "ExampleSubsystem.h"
#include "../RobotMap.h"


ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	m_cam = new PIXYCam(SPI::kOnboardCS0);
}

void ExampleSubsystem::InitDefaultCommand()
{

}

void ExampleSubsystem::readPIXYCam()
{
	uint8_t block=1;
	block = m_cam->getBlocks(block);

}
