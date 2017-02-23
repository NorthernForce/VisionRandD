#include <Commands/DriveWithVision.h>
#include <Subsystems/Vision.h>
#include "../RobotMap.h"


Vision::Vision() :
		Subsystem("Vision")
{
	m_cam = new PIXYCam(SPI::kOnboardCS0);
}

void Vision::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithVision());

}

Block Vision::readPIXYCam()
{
	uint8_t block=100;
	block = m_cam->getBlocks(block);
	return m_cam->g_blocks[0];

}
