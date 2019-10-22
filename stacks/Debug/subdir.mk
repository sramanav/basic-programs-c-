################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../stacks.c 

OBJS += \
./stacks.o 

C_DEPS += \
./stacks.d 


# Each subdirectory must supply rules for building sources it contributes
stacks.o: ../stacks.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"stacks.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


