################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include mice_link/newlinkxx/src/subdir.mk
-include mice_link/newlinkxx/src/OSD_CR/subdir.mk
-include mice_link/newlinkxx/src/MSGDRI/subdir.mk
-include mice_link/newlinkxx/src/IPC/subdir.mk
-include mice_link/newlinkxx/src/GST/subdir.mk
-include mice_link/newlinkxx/Release/src/subdir.mk
-include mice_link/newlinkxx/Release/src/OSD_CR/subdir.mk
-include mice_link/newlinkxx/Release/src/MSGDRI/subdir.mk
-include mice_link/newlinkxx/Release/src/IPC/subdir.mk
-include mice_link/newlinkxx/Release/src/GST/subdir.mk
-include mice_link/newlinkxx/Debug/src/subdir.mk
-include mice_link/newlinkxx/Debug/src/OSD_CR/subdir.mk
-include mice_link/newlinkxx/Debug/src/MSGDRI/subdir.mk
-include mice_link/newlinkxx/Debug/src/IPC/subdir.mk
-include mice_link/newlinkxx/Debug/src/GST/subdir.mk
-include mice_link/linkxx/src/subdir.mk
-include mice_link/linkxx/src/state/subdir.mk
-include mice_link/linkxx/src/ptz/src/subdir.mk
-include mice_link/linkxx/src/platform/subdir.mk
-include mice_link/linkxx/src/comm/subdir.mk
-include mice_link/linkxx/src/OSA_CAP/src/subdir.mk
-include mice_link/linkxx/src/IPC/subdir.mk
-include mice_link/linkxx/src/DxTimer/src/subdir.mk
-include mice_link/linkxx/subdir.mk
-include mice_link/linkxx/Release/src/subdir.mk
-include mice_link/linkxx/Release/src/state/subdir.mk
-include mice_link/linkxx/Release/src/ptz/src/subdir.mk
-include mice_link/linkxx/Release/src/platform/subdir.mk
-include mice_link/linkxx/Release/src/comm/subdir.mk
-include mice_link/linkxx/Release/src/OSA_CAP/src/subdir.mk
-include mice_link/linkxx/Release/src/IPC/subdir.mk
-include mice_link/linkxx/Release/src/DxTimer/src/subdir.mk
-include mice_link/linkxx/Release/subdir.mk
-include mice_link/linkxx/Debug/src/subdir.mk
-include mice_link/linkxx/Debug/src/state/subdir.mk
-include mice_link/linkxx/Debug/src/ptz/src/subdir.mk
-include mice_link/linkxx/Debug/src/platform/subdir.mk
-include mice_link/linkxx/Debug/src/comm/subdir.mk
-include mice_link/linkxx/Debug/src/OSA_CAP/src/subdir.mk
-include mice_link/linkxx/Debug/src/IPC/subdir.mk
-include mice_link/linkxx/Debug/src/DxTimer/src/subdir.mk
-include mice_link/linkxx/Debug/subdir.mk
-include PTZ_ctrl/subdir.mk
-include PTZ_ctrl/Release/subdir.mk
-include PTZ_ctrl/Release/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include PTZ_ctrl/Debug/subdir.mk
-include PTZ_ctrl/Debug/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include PTZ_ctrl/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include PTZ_control/subdir.mk
-include PTZ_control/Release/subdir.mk
-include PTZ_control/Release/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include PTZ_control/Debug/subdir.mk
-include PTZ_control/Debug/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include PTZ_control/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include Bridge_PTZ/subdir.mk
-include Bridge_PTZ/Release/subdir.mk
-include Bridge_PTZ/Debug/subdir.mk

OS_SUFFIX := $(subst Linux,linux,$(subst Darwin/x86_64,darwin,$(shell uname -s)/$(shell uname -m)))

-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CU_DEPS)),)
-include $(CU_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# OpenGL+GLUT OS-specific define
ifeq ($(shell uname -s),Darwin)
GLUT_LIBS := -Xlinker -framework -Xlinker GLUT -Xlinker -framework -Xlinker OpenGL
else
GLUT_LIBS := -lGL -lGLU -lglut 
endif


# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: output_nsight

# Tool invocations
output_nsight: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: NVCC Linker'
	/usr/local/cuda-9.0/bin/nvcc --cudart static -Xlinker -rpath=/usr/lib/aarch64-linux-gnu/tegra --relocatable-device-code=false -gencode arch=compute_30,code=compute_30 -gencode arch=compute_50,code=compute_50 -gencode arch=compute_30,code=sm_30 -gencode arch=compute_50,code=sm_50 -m64 -ccbin aarch64-linux-gnu-g++ -link -o  "output_nsight" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CU_DEPS)$(CPP_DEPS)$(C_DEPS) output_nsight
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
