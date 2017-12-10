################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/periph_setup.c 

OBJS += \
./src/main.o \
./src/periph_setup.o 

C_DEPS += \
./src/main.d \
./src/periph_setup.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -Ddg_configBLACK_ORCA_IC_REV=BLACK_ORCA_IC_REV_A -Ddg_configBLACK_ORCA_IC_STEP=BLACK_ORCA_IC_STEP_E -DRELEASE_BUILD -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\memory\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\config" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\peripherals\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\adapters\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\sys_man\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\osal" -include"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config\custom_config_qspi.h" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


