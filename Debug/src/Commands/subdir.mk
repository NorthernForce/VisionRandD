################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/ExampleCommand.cpp 

OBJS += \
./src/Commands/ExampleCommand.o 

CPP_DEPS += \
./src/Commands/ExampleCommand.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-frc-linux-gnueabi-g++ -I"/Users/dmartin/wpilib/cpp/current/include" -I"/Users/dmartin/Documents/workspace/PracticeCode1/src" -I"/Users/dmartin/wpilib/user/cpp/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


