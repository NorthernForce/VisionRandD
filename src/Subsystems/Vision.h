#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include <Subsystems/Vision.h>
#include "Library/PIXYCam.h"
#include "WPILib.h"

class Vision: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	PIXYCam* m_cam;
public:
	Vision();
	Block readPIXYCam();
	void InitDefaultCommand();
};

#endif
