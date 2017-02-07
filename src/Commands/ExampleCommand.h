#ifndef EXAMPLE_COMMAND_H
#define EXAMPLE_COMMAND_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Subsystems/ExampleSubsystem.h"

class ExampleCommand: public CommandBase
{
public:
	ExampleCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
