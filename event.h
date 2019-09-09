/*
 * event.h
 *
 *  Created on: 2019年8月29日
 *      Author: fan
 */

#ifndef EVENT_H_
#define EVENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <linux/input.h>
#include <X11/Xlib.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pthread.h>
//#include <sys/cdefs.h>
#include <unistd.h>
#include "ipc_custom_head.hpp"
#include "IPC.h"
class event
{
public:
	static event* getInstance();
	virtual ~event();
	void captureMouse();
	static void* openMouse(void* x);
	void getKeyboard(int num);

	int openInput(char* dev);
private:
	event();
	static event *instance;
	static int m_ckeyboard;
	static int m_bkey;
	static int m_dmouse_x;
	static int m_dmouse_y;
	static int m_bmouse;
	//1:left 2:middle 3:right
};

#endif /* EVENT_H_ */
