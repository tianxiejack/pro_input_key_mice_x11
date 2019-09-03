################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../IPC.cpp \
../event.cpp \
../main_send.cpp 

OBJS += \
./IPC.o \
./event.o \
./main_send.o 

CPP_DEPS += \
./IPC.d \
./event.d \
./main_send.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: NVCC Compiler'
	/usr/local/cuda-8.0/bin/nvcc -G -g -O0 -ccbin aarch64-linux-gnu-g++ -gencode arch=compute_30,code=sm_30 -gencode arch=compute_50,code=sm_50 -m64 -odir "." -M -o "$(@:%.o=%.d)" "$<"
	/usr/local/cuda-8.0/bin/nvcc -G -g -O0 --compile -m64 -ccbin aarch64-linux-gnu-g++  -x c++ -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


