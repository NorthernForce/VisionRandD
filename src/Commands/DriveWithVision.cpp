#include <Commands/DriveWithVision.h>
#include <Subsystems/Vision.h>
#include "DriveWithVision.h"

DriveWithVision::DriveWithVision() : CommandBase("DriveWithVision")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(pixy0.get());
}

// Called just before this Command runs the first time
void DriveWithVision::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveWithVision::Execute()
{
    Block b;
    b = pixy0.get()->readPIXYCam();
    SmartDashboard::PutNumber("signature", b.signature );
    SmartDashboard::PutNumber("x", b.x );
    SmartDashboard::PutNumber("y", b.y );
    SmartDashboard::PutNumber("width", b.width );
    SmartDashboard::PutNumber("height", b.height );
    SmartDashboard::PutNumber("angle", b.angle );
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithVision::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveWithVision::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithVision::Interrupted()
{

}
