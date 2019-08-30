#include "event.h"
#include "IPC.h"



int main(void)
{
	IPC* ipc = IPC::getInstance();
	event* mouse = event::getInstance();
	ipc->IPC_Creat();
	mouse->captureMouse();
		return 0;
}
