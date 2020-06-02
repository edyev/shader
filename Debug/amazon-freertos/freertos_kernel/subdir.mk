################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../amazon-freertos/freertos_kernel/event_groups.c \
../amazon-freertos/freertos_kernel/list.c \
../amazon-freertos/freertos_kernel/queue.c \
../amazon-freertos/freertos_kernel/stream_buffer.c \
../amazon-freertos/freertos_kernel/tasks.c \
../amazon-freertos/freertos_kernel/timers.c 

OBJS += \
./amazon-freertos/freertos_kernel/event_groups.o \
./amazon-freertos/freertos_kernel/list.o \
./amazon-freertos/freertos_kernel/queue.o \
./amazon-freertos/freertos_kernel/stream_buffer.o \
./amazon-freertos/freertos_kernel/tasks.o \
./amazon-freertos/freertos_kernel/timers.o 

C_DEPS += \
./amazon-freertos/freertos_kernel/event_groups.d \
./amazon-freertos/freertos_kernel/list.d \
./amazon-freertos/freertos_kernel/queue.d \
./amazon-freertos/freertos_kernel/stream_buffer.d \
./amazon-freertos/freertos_kernel/tasks.d \
./amazon-freertos/freertos_kernel/timers.d 


# Each subdirectory must supply rules for building sources it contributes
amazon-freertos/freertos_kernel/%.o: ../amazon-freertos/freertos_kernel/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/board" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/source" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/amazon-freertos/freertos_kernel/include" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/amazon-freertos/freertos_kernel/portable/GCC/ARM_CM33_NTZ/non_secure" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/startup" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/CMSIS" -I"/Users/Eddie/Documents/MCUXpressoIDE_11.1.1/workspace/LPC55S69_shader/device" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


