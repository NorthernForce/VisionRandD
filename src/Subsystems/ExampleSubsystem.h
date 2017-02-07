#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Subsystems/ExampleSubsystem.h"

#include "Library/PIXYCam.h"
#include "WPILib.h"

class ExampleSubsystem: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	PIXYCam* m_cam;
public:
	ExampleSubsystem();
	Block readPIXYCam();
	void InitDefaultCommand();
};

#endif
