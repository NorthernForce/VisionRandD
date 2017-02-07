#include "ExampleSubsystem.h"
#include <Commands/ExampleCommand.h>
#include "../RobotMap.h"


ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
{
	m_cam = new PIXYCam(SPI::kOnboardCS0);
}

void ExampleSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new ExampleCommand());

}

Block ExampleSubsystem::readPIXYCam()
{
	uint8_t block=100;
	block = m_cam->getBlocks(block);
	return m_cam->g_blocks[0];

}
