#include "ExampleCommand.h"
#include <Subsystems/ExampleSubsystem.h>
#include "CommandBase.h"

ExampleCommand::ExampleCommand() : CommandBase("ExampleCommand")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(examplesubsystem.get());
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute()
{
    Block b;
    b = examplesubsystem.get()->readPIXYCam();
    SmartDashboard::PutNumber("signature", b.signature );
    SmartDashboard::PutNumber("x", b.x );
    SmartDashboard::PutNumber("y", b.y );
    SmartDashboard::PutNumber("width", b.width );
    SmartDashboard::PutNumber("height", b.height );
    SmartDashboard::PutNumber("angle", b.angle );
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ExampleCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted()
{

}
