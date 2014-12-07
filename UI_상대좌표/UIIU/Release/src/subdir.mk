################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AnimationBaseForm.cpp \
../src/FormFactory.cpp \
../src/MainForm.cpp \
../src/SceneRegister.cpp \
../src/UiVisualElement.cpp \
../src/UiVisualElementEntry.cpp \
../src/UiVisualElementFrame.cpp \
../src/ZorderForm.cpp 

OBJS += \
./src/AnimationBaseForm.o \
./src/FormFactory.o \
./src/MainForm.o \
./src/SceneRegister.o \
./src/UiVisualElement.o \
./src/UiVisualElementEntry.o \
./src/UiVisualElementFrame.o \
./src/ZorderForm.o 

CPP_DEPS += \
./src/AnimationBaseForm.d \
./src/FormFactory.d \
./src/MainForm.d \
./src/SceneRegister.d \
./src/UiVisualElement.d \
./src/UiVisualElementEntry.d \
./src/UiVisualElementFrame.d \
./src/ZorderForm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	clang++.exe -I"pch" -I"C:\tizen-sdk\workspace\UIIU\inc" -O3 -g -Wall -c -fmessage-length=0 -target arm-tizen-linux-gnueabi -gcc-toolchain "C:/tizen-sdk/tools/smart-build-interface/../arm-linux-gnueabi-gcc-4.5/" -ccc-gcc-name arm-linux-gnueabi-g++ -march=armv7-a -mfloat-abi=softfp -mfpu=vfpv3-d16 -mtune=cortex-a8 -Wno-gnu -fPIE --sysroot="C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native" -I"C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native/usr/include/libxml2" -I"C:\tizen-sdk\library" -I"C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native/usr/include" -I"C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native/usr/include/osp" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


