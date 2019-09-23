#include "event.h"
#include "IPC.h"



int main(void)
{
#if defined(__linux__)
	setenv ("DISPLAY", ":0", 0);
	printf("\n setenv DISPLAY=%s\n",getenv("DISPLAY"));
#endif

	IPC* ipc = IPC::getInstance();
	event* mouse = event::getInstance();
	ipc->IPC_Creat();
	mouse->captureMouse();
		return 0;
}
