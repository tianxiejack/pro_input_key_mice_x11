#include "event.h"
#include "IPC.h"



int main(void)
{
	pid_t pid;
	IPC* ipc = IPC::getInstance();
	event* mouse = event::getInstance();
	ipc->IPC_Creat();
	pid = fork();
	if (pid == 0)
	{
		mouse->captureMouse();
	}
	else
	{
		printf("fork\n");
		while(1)
		{
			ipc->IPCRecvMsg();
		}
	}
		return 0;
}
