
#ifndef IPC_CUSTOM_HEAD_HPP_
#define IPC_CUSTOM_HEAD_HPP_

#ifdef __cplusplus
extern "C"{
#endif

#include "Ipcctl.h"
#include "stdlib.h"
#include <string.h>
#include <stdio.h>

#define CFGID_FEILD_MAX	16
#define CFGID_BLOCK_MAX	128
#define CFGID_USEROSD_MAX	32
#define USEROSD_LENGTH	128

#define DEFAULTPATH "/"

typedef enum 
{
	MOUSE_ID = 0,
	KEYBOARD_ID
}CMD_ID;

typedef enum 
{
    IPC_INPUTEVENT_MSG = 0,  		// SERVER TO CLIENT
    IPC_MAX
}IPC_MTYPE;

typedef enum
{
	shm_rdonly,
	shm_rdwr
}shm_perms;

typedef struct
{
	unsigned int intPrm[PARAMLEN];
}IPC_PRM_INT;

static IPC_Handl_t * tmpIpc;

static void Ipc_init()
{
	tmpIpc = (IPC_Handl_t*)malloc(IPC_MAX* sizeof(IPC_Handl_t));
	memset(tmpIpc,0,sizeof(IPC_Handl_t)*IPC_MAX);
	char tmp[256] = {"/"};
	tmpIpc[0].IPCID = IPC_MAX;
	
	memcpy(tmpIpc[IPC_INPUTEVENT_MSG].name,tmp,sizeof(tmp));
	tmpIpc[IPC_INPUTEVENT_MSG].Identify = IPC_INPUTEVENT_MSG;
	tmpIpc[IPC_INPUTEVENT_MSG].Class = IPC_Class_MSG;
	tmpIpc[IPC_INPUTEVENT_MSG].IPCID = IPC_MAX;
	tmpIpc[IPC_INPUTEVENT_MSG].length = 0;
	tmpIpc[IPC_INPUTEVENT_MSG].ptr = NULL;

	return;
}


static void *ipc_getSharedMem(IPC_MTYPE itype)
{
		return ipc_getSharedAddress(itype);
		//return (void*)IpcHandl[itype].ptr;

}

#ifdef __cplusplus
}
#endif

#endif /* IPC_CUSTOM_HEAD_HPP_ */
