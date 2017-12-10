################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/config.c \
C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/system_ARMCM0.c 

S_UPPER_SRCS += \
C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/startup_ARMCM0.S \
C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/vector_table.S 

OBJS += \
./startup/config.o \
./startup/startup_ARMCM0.o \
./startup/system_ARMCM0.o \
./startup/vector_table.o 

S_UPPER_DEPS += \
./startup/startup_ARMCM0.d \
./startup/vector_table.d 

C_DEPS += \
./startup/config.d \
./startup/system_ARMCM0.d 


# Each subdirectory must supply rules for building sources it contributes
startup/config.o: C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/config.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -Ddg_configBLACK_ORCA_IC_REV=BLACK_ORCA_IC_REV_A -Ddg_configBLACK_ORCA_IC_STEP=BLACK_ORCA_IC_STEP_E -DRELEASE_BUILD -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\memory\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\config" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\peripherals\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\adapters\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\sys_man\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\osal" -include"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config\custom_config_qspi.h" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

startup/startup_ARMCM0.o: C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/startup_ARMCM0.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -x assembler-with-cpp -Ddg_configBLACK_ORCA_IC_REV=BLACK_ORCA_IC_REV_A -Ddg_configBLACK_ORCA_IC_STEP=BLACK_ORCA_IC_STEP_E -DRELEASE_BUILD -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\config" -include"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config\custom_config_qspi.h" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

startup/system_ARMCM0.o: C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/system_ARMCM0.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -Ddg_configBLACK_ORCA_IC_REV=BLACK_ORCA_IC_REV_A -Ddg_configBLACK_ORCA_IC_STEP=BLACK_ORCA_IC_STEP_E -DRELEASE_BUILD -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\memory\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\config" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\peripherals\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\adapters\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\sys_man\include" -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\osal" -include"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config\custom_config_qspi.h" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

startup/vector_table.o: C:/Users/hells/Downloads/DA1468x_SDK_BTLE_v_1.0.8.1050.1/DA1468x_SDK_BTLE_v_1.0.8.1050.1/sdk/bsp/startup/vector_table.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -x assembler-with-cpp -Ddg_configBLACK_ORCA_IC_REV=BLACK_ORCA_IC_REV_A -Ddg_configBLACK_ORCA_IC_STEP=BLACK_ORCA_IC_STEP_E -DRELEASE_BUILD -I"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\config" -include"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\suota_loader\config\custom_config_qspi.h" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


