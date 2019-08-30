

#include <stdio.h>
#include <stdlib.h>
#include "IPC.h"
#include "event.h"

int main(void)
{
	IPC* ipc = IPC::getInstance();
	ipc->IPC_Creat();
	while(1)
	{
		ipc->IPCRecvMsg();
	}

	return 0;
}
