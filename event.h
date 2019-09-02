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
#include <fcntl.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
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
	void getKeyboard(int num);

	int openInput(char* dev);
private:
	event();
	static event *instance;
	int m_ckeyboard;
	int m_bkey;
	int m_dmouse_x;
	int m_dmouse_y;
	int m_bmouse;
	//1:left 2:middle 3:right
};

#endif /* EVENT_H_ */
