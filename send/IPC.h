/*
 * IPC.h
 *
 *  Created on: 2019年8月30日
 *      Author: fan
 */

#ifndef IPC_H_
#define IPC_H_

#include "ipc_custom_head.hpp"
#include <stdio.h>
#include <stdlib.h>
#pragma once
#include <iostream>


using namespace std;

class IPC
{
private:
	IPC();
	static IPC *instance;
public:

	int IPCSendMsg(CMD_ID cmd, void* prm,int len);
	int IPCRecvMsg();

	void IPC_Creat();
	virtual ~IPC();
	static IPC* getInstance();
};


#endif /* IPC_H_ */
