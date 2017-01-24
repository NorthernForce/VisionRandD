################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Library\ Folder/PIXYCam.cpp 

OBJS += \
./src/Library\ Folder/PIXYCam.o 

CPP_DEPS += \
./src/Library\ Folder/PIXYCam.d 


# Each subdirectory must supply rules for building sources it contributes
src/Library\ Folder/PIXYCam.o: ../src/Library\ Folder/PIXYCam.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-frc-linux-gnueabi-g++ -I"/Users/dmartin/wpilib/cpp/current/include" -I"/Users/dmartin/Documents/workspace/PracticeCode1/src" -I"/Users/dmartin/wpilib/user/cpp/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Library Folder/PIXYCam.d" -MT"src/Library\ Folder/PIXYCam.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


