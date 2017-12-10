################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Insulog/sdk/middleware/console/src/console.c 

OBJS += \
./sdk/console/src/console.o 

C_DEPS += \
./sdk/console/src/console.d 


# Each subdirectory must supply rules for building sources it contributes
sdk/console/src/console.o: C:/Insulog/sdk/middleware/console/src/console.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -Ddg_configBLACK_ORCA_IC_REV=BLACK_ORCA_IC_REV_A -Ddg_configBLACK_ORCA_IC_STEP=BLACK_ORCA_IC_STEP_E -I"../../../sdk/interfaces/ble_stack/" -I"C:\Insulog\projects\insulog\config" -I"C:\Insulog\sdk\bsp\adapters\include" -I"C:\Insulog\sdk\interfaces\ble\config" -I"C:\Insulog\sdk\interfaces\ble\include" -I"C:\Insulog\sdk\interfaces\ble\include\adapter" -I"C:\Insulog\sdk\interfaces\ble\include\manager" -I"C:\Insulog\sdk\interfaces\ble\src\stack\config" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\att" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\att\attc" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\att\attm" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\att\atts" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\gap" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\gap\gapc" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\gap\gapm" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\gatt" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\gatt\gattc" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\gatt\gattm" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\l2c\l2cc" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\l2c\l2cm" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\smp" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\smp\smpc" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\host\smp\smpm" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\hl\src\rwble_hl" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\ll\src\controller\em" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\ll\src\controller\llc" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\ll\src\controller\lld" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\ll\src\controller\llm" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\ll\src\rwble" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ble\profiles" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\ea\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\em\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\hci\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\ip\hci\src" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\common\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\dbg\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\gtl\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\gtl\src" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\h4tl\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\ke\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\ke\src" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\nvds\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\modules\rwip\api" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\arch" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\arch\ll\armgcc_4_8" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\arch\boot\armgcc_4_8" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\arch\compiler\armgcc_4_8" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\build\ble-full\reg\fw" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\driver\flash" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\driver\reg" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\driver\rf" -I"C:\Insulog\sdk\interfaces\ble\src\stack\plf\black_orca\src\driver\rf\api" -I"C:\Insulog\sdk\interfaces\ble_services\include" -I"C:\Insulog\sdk\bsp\include" -I"C:\Insulog\sdk\bsp\config" -I"C:\Insulog\sdk\bsp\system\sys_man\include" -I"C:\Insulog\sdk\bsp\free_rtos\include" -I"C:\Insulog\sdk\bsp\osal" -I"C:\Insulog\sdk\bsp\peripherals\include" -I"C:\Insulog\sdk\bsp\memory\include" -I"C:\Insulog\sdk\middleware\console\include" -include"C:\Insulog\projects\insulog\config\custom_config_qspi.h" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


