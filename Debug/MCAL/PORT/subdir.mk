################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/PORT/Port_Program.c 

OBJS += \
./MCAL/PORT/Port_Program.o 

C_DEPS += \
./MCAL/PORT/Port_Program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/PORT/%.o: ../MCAL/PORT/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\Sharaf\Documents\COT\AVRCOT\APP" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL\PB" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL\PB\Inc" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL\LED" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL\LED\Inc" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL\LED" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL\LED\Inc" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\MCAL\PORT" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\MCAL\PORT\Inc" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\CONFIG" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\HAL" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\LIB" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\MCAL" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\MCAL\DIO" -I"C:\Users\Sharaf\Documents\COT\AVRCOT\MCAL\DIO\Inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


