################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include sdk/peripherals/src/subdir.mk
-include sdk/osal/subdir.mk
-include sdk/memory/src/subdir.mk
-include sdk/cpm/subdir.mk
-include sdk/ble_services/src/subdir.mk
-include sdk/ble/src/util/subdir.mk
-include sdk/ble/src/stack/plf/black_orca/src/driver/rf/src/subdir.mk
-include sdk/ble/src/stack/plf/black_orca/src/arch/main/ble/subdir.mk
-include sdk/ble/src/stack/modules/rwip/src/subdir.mk
-include sdk/ble/src/stack/modules/nvds/src/subdir.mk
-include sdk/ble/src/stack/ip/ble/profiles/subdir.mk
-include sdk/ble/src/stack/ip/ble/ll/src/rwble/subdir.mk
-include sdk/ble/src/manager/subdir.mk
-include sdk/ble/src/adapter/subdir.mk
-include sdk/ble/src/subdir.mk
-include sdk/adapters/src/subdir.mk
-include sdk/FreeRTOS/portable/MemMang/subdir.mk
-include sdk/FreeRTOS/portable/GCC/ARM_CM0/subdir.mk
-include sdk/FreeRTOS/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
ble_suota_loader.bin \

SECONDARY_SIZE += \
ble_suota_loader.siz \


# All Target
all: pre-build main-build

# Main-build Target
main-build: ble_suota_loader.elf secondary-outputs

# Tool invocations
ble_suota_loader.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -T "C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\ble_suota_loader/DA14681-01-Release_QSPI/mem.ld" -T "C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\ble_suota_loader/DA14681-01-Release_QSPI/sections.ld" -Xlinker --gc-sections -L"../../../../../interfaces/ble_stack//DA14681-01-Release" -L"C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\misc" -Wl,-Map,"ble_suota_loader.map" --specs=nano.specs --specs=nosys.specs -o "ble_suota_loader.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ble_suota_loader.bin: ble_suota_loader.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O binary "ble_suota_loader.elf"  "ble_suota_loader.bin"
	@echo 'Finished building: $@'
	@echo ' '

ble_suota_loader.siz: ble_suota_loader.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "ble_suota_loader.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) ble_suota_loader.elf
	-@echo ' '

pre-build:
	-@echo 'Generate linker scripts.'
	-make generate_ldscripts LD_DEFS=-DRELEASE_BUILD IC_REV=A IC_STEP=E APP_CONFIG_H="C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\system\loaders\ble_suota_loader\config\custom_config_qspi.h" CC="arm-none-eabi-gcc" BSP_CONFIG_DIR="C:\Users\hells\Downloads\DA1468x_SDK_BTLE_v_1.0.8.1050.1\DA1468x_SDK_BTLE_v_1.0.8.1050.1\sdk\bsp\config"
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents
.SECONDARY: main-build pre-build

-include ../makefile.targets
