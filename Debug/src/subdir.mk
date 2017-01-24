################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandBase.cpp \
../src/OI.cpp \
../src/Robot.cpp 

OBJS += \
./src/CommandBase.o \
./src/OI.o \
./src/Robot.o 

CPP_DEPS += \
./src/CommandBase.d \
./src/OI.d \
./src/Robot.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-frc-linux-gnueabi-g++ -I"/Users/dmartin/wpilib/cpp/current/include" -I"/Users/dmartin/Documents/workspace/PracticeCode1/src" -I"/Users/dmartin/wpilib/user/cpp/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


