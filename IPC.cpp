/*
 * IPC.cpp
 *
 *  Created on: 2019年8月30日
 *      Author: fan
 */

#include "IPC.h"
#include "event.h"

IPC *IPC::instance = NULL;

IPC::IPC() {
	// TODO Auto-generated constructor stub

}

IPC::~IPC() {
	// TODO Auto-generated destructor stub
}

int IPC::IPCSendMsg(CMD_ID cmd, void* prm,int len)
{
	if(len >= PARAMLEN || (prm == NULL && len > 0))
		return -1;

	SENDST sendData;
	memset(sendData.param, 0, PARAMLEN);
	sendData.cmd_ID = cmd;
	if(len > 0)
		memcpy(sendData.param, prm, len);

	ipc_sendmsg(IPC_INPUTEVENT_MSG ,&sendData);

	return 0;
}


int IPC::IPCRecvMsg()
{
	SENDST recvData;
	//IPC_PRM_INT *pIn = (IPC_PRM_INT *)&recvData.param;
	ipc_recvmsg(IPC_INPUTEVENT_MSG,&recvData);

	event* mouse = event::getInstance();
	switch(recvData.cmd_ID)
	{
		case MOUSE_ID:
			if (recvData.param[0] == 0) printf("no click   ");
			else if (recvData.param[0] == 1) printf("left click   ");
			else if (recvData.param[0] == 2) printf("middle click   ");
			else if (recvData.param[0] == 3) printf("right click   ");

			printf("position:(%d,%d)\n",recvData.param[1],recvData.param[2]);
			break;
		case KEYBOARD_ID:
			mouse->getKeyboard(recvData.param[1]);
			if (recvData.param[0] == 0) printf("free\n");
			if (recvData.param[0] == 1) printf("enter\n");
			//printf("keyboard in\n");
			break;
		default:
			break;
	}
	return 0;
}

void IPC::IPC_Creat()
{
	Ipc_init();
   	int ret = Ipc_create(tmpIpc);
	if(ret == -1)
	{
		printf("ipc create error \n");
		return;
	}
}
IPC* IPC::getInstance()
{
	if (NULL == instance)
	{
		instance = new IPC();
	}
	return instance;

}
