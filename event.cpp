/*
 * event.cpp
 *
 *  Created on: 2019年8月29日
 *      Author: fan
 */

#include "event.h"

#define MOUSE "/dev/input/event3"
#define KEYBOARD "/dev/input/event4"

event* event::instance = NULL;

event::event()
{
	// TODO Auto-generated constructor stub
	m_ckeyboard = 0;
	m_bkey = 0;
	m_dmouse_x = 0;
	m_dmouse_y = 0;
	m_bmouse = 0;
}

void event::getKeyboard(int num)
{
	switch(num)
	{
	case 1:
		printf("--'ESC'--\n");
		break;
	case 2:
		printf("--'1'--\n");
		break;
	case 3:
		printf("--'2'--\n");
		break;
	case 4:
		printf("--'3'--\n");
		break;
	case 5:
		printf("--'4'--\n");
		break;
	case 6:
		printf("--'5'--\n");
		break;
	case 7:
		printf("--'6'--\n");
		break;
	case 8:
		printf("--'7'--\n");
		break;
	case 9:
		printf("--'8'--\n");
		break;
	case 10:
		printf("--'9'--\n");
		break;
	case 11:
		printf("--'0'--\n");
		break;
	case 12:
		printf("--'-'--\n");
		break;
	case 13:
		printf("--'+'--\n");
		break;
	case 14:
		printf("--'back'--\n");
		break;
	case 15:
		printf("--'TAB'--\n");
		break;
	case 16:
		printf("--'Q'--\n");
		break;
	case 17:
		printf("--'W'--\n");
		break;
	case 18:
		printf("--'E'--\n");
		break;
	case 19:
		printf("--'R'--\n");
		break;
	case 20:
		printf("--'T'--\n");
		break;
	case 21:
		printf("--'Y'--\n");
		break;
	case 22:
		printf("--'U'--\n");
		break;
	case 23:
		printf("--'I'--\n");
		break;
	case 24:
		printf("--'O'--\n");
		break;
	case 25:
		printf("--'P'--\n");
		break;
	case 26:
		printf("--'{'--\n");
		break;
	case 27:
		printf("--'}'--\n");
		break;
	case 28:
		printf("--'ENTER'--\n");
		break;
	case 29:
		printf("--'LEFT CTRL'--\n");
		break;
	case 30:
		printf("--'A'--\n");
		break;
	case 31:
		printf("--'S'--\n");
		break;
	case 32:
		printf("--'D'--\n");
		break;
	case 33:
		printf("--'F'--\n");
		break;
	case 34:
		printf("--'G'--\n");
		break;
	case 35:
		printf("--'H'--\n");
		break;
	case 36:
		printf("--'J'--\n");
		break;
	case 37:
		printf("--'K'--\n");
		break;
	case 38:
		printf("--'L'--\n");
		break;
	case 39:
		printf("--';'--\n");
		break;
	case 40:
		printf("--' "" '--\n");
		break;
	case 41:
		printf("--'~'--\n");
		break;
	case 42:
		printf("--'LEFT SHIFT'--\n");
		break;
	case 43:
		printf("--'\'--\n");
		break;
	case 44:
		printf("--'Z'--\n");
		break;
	case 45:
		printf("--'X'--\n");
		break;
	case 46:
		printf("--'C'--\n");
		break;
	case 47:
		printf("--'V'--\n");
		break;
	case 48:
		printf("--'B'--\n");
		break;
	case 49:
		printf("--'N'--\n");
		break;
	case 50:
		printf("--'M'--\n");
		break;
	case 51:
		printf("--'<'--\n");
		break;
	case 52:
		printf("--'>'--\n");
		break;
	case 53:
		printf("--'?'--\n");
		break;
	case 54:
		printf("--'RIGHT SHIFT'--\n");
		break;
	case 55:
		printf("--'*'--\n");
		break;
	case 56:
		printf("--'LEFT ALT'--\n");
		break;
	case 57:
		printf("--'BLANK'--\n");
		break;
	case 58:
		printf("--'CAPSLOCK'--\n");
		break;
	case 59:
		printf("--'F1'--\n");
		break;
	case 60:
		printf("--'F2'--\n");
		break;
	case 61:
		printf("--'F3'--\n");
		break;
	case 62:
		printf("--'F4'--\n");
		break;
	case 63:
		printf("--'F5'--\n");
		break;
	case 64:
		printf("--'F6'--\n");
		break;
	case 65:
		printf("--'F7'--\n");
		break;
	case 66:
		printf("--'F8'--\n");
		break;
	case 67:
		printf("--'F9'--\n");
		break;
	case 68:
		printf("--'F10'--\n");
		break;
	case 69:
		printf("--'NUM LOCK'--\n");
		break;
	case 70:
		printf("--'SCROLL'--\n");
		break;
	case 71:
		printf("--'SMALL 7'--\n");
		break;
	case 72:
		printf("--'SMALL 8'--\n");
		break;
	case 73:
		printf("--'SMALL 9'--\n");
		break;
	case 74:
		printf("--'SMALL -'--\n");
		break;
	case 75:
		printf("--'SMALL 4'--\n");
		break;
	case 76:
		printf("--'SMALL 5'--\n");
		break;
	case 77:
		printf("--'SMALL 6'--\n");
		break;
	case 78:
		printf("--'SMALL +'--\n");
		break;
	case 79:
		printf("--'SMALL 1'--\n");
		break;
	case 80:
		printf("--'SMALL 2'--\n");
		break;
	case 81:
		printf("--'SMALL 3'--\n");
		break;
	case 82:
		printf("--'SMALL 0'--\n");
		break;
	case 83:
		printf("--'SMALL .'--\n");
		break;
	case 87:
		printf("--'F11'--\n");
		break;
	case 88:
		printf("--'F12'--\n");
		break;
	case 96:
		printf("--'SMALL ENTER'--\n");
		break;
	case 97:
		printf("--'RIGHT CTRL'--\n");
		break;
	case 98:
		printf("--'SMALL /'--\n");
		break;
	case 99:
		printf("--'PrtSc'--\n");
		break;
	case 100:
		printf("--'RIGHT ALT'--\n");
		break;
	case 102:
		printf("--'Home'--\n");
		break;
	case 103:
		printf("--'UP'--\n");
		break;
	case 104:
		printf("--'Page UP'--\n");
		break;
	case 105:
		printf("--'LEFT'--\n");
		break;
	case 106:
		printf("--'RIGHT'--\n");
		break;
	case 107:
		printf("--'End'--\n");
		break;
	case 108:
		printf("--'DOWN'--\n");
		break;
	case 109:
		printf("--'Page Down'--\n");
		break;
	case 110:
		printf("--'Insert'--\n");
		break;
	case 111:
		printf("--'Delete'--\n");
		break;
	case 119:
		printf("--'Pause'--\n");
		break;
	case 125:
		printf("--'LEFT WIN'--\n");
		break;
	case 126:
		printf("--'RIGHT WIN +'--\n");
		break;
	case 127:
		printf("--'TASK'--\n");
		break;
	}
}


void event::captureMouse()
{
	int fd_mouse,fd_key,retval;
	struct input_event buf_mouse;
	struct input_event buf_key;
	fd_set readfds;
	struct timeval tv;

	fd_mouse = open(MOUSE, O_RDONLY);
	fd_key = open(KEYBOARD,O_RDONLY);

	IPC* ipc = IPC::getInstance();

	int par[100] ={0};

	if(fd_mouse < 0 || fd_key < 0)
	{
		printf("open failed\n");
		exit(1);
	}
	else
	{
		printf("open successful\n");
	}
	while(1)
	{
		tv.tv_sec = 5;
		tv.tv_usec = 0;
		FD_ZERO(&readfds);
		FD_SET(fd_mouse,&readfds);
		FD_SET(fd_key,&readfds);
		retval = select(fd_key+1,&readfds,NULL,NULL,&tv);
		if (retval == 0)
		{
			printf("Time out!\n");
		}
		if (FD_ISSET(fd_mouse,&readfds))
		{
			if (read(fd_mouse,&buf_mouse,sizeof(struct input_event)) <= 0)
			{
				continue;
			}
			switch (buf_mouse.type)
			{
				case EV_KEY:
					switch (buf_mouse.code)
					{
						case BTN_LEFT:
						{
							if (buf_mouse.value == 1)
							{
								m_bmouse = 1;
							}
							else
							{
								m_bmouse = 0;
							}
						}
						break;
						case BTN_RIGHT:
						{
							if (buf_mouse.value == 1)
							{
								m_bmouse = 3;
							}
							else
							{
								m_bmouse = 0;
							}
						}
						break;
						case BTN_MIDDLE:
						{
							if (buf_mouse.value == 1)
							{
								m_bmouse = 2;
							}
							else
							{
								m_bmouse = 0;
							}
						}
						break;
						default:
							break;
					}
				break;
				case EV_REL:
				{
					switch (buf_mouse.code)
					{
						case REL_X:
							{
								m_dmouse_x += buf_mouse.value;
							}
							break;
						case REL_Y:
							{
								m_dmouse_y += buf_mouse.value;
							}
							break;
					}
				}
				break;
			}

			par[0] = m_bmouse;
			par[1] = m_dmouse_x;
			par[2] = m_dmouse_y;

			ipc->IPCSendMsg(MOUSE_ID,par,12);
		}
		if (FD_ISSET(fd_key,&readfds))
		{
			read(fd_key,&buf_key,sizeof(struct input_event));
			if (buf_key.type == 1)
			{
				m_ckeyboard = buf_key.code;
				m_bkey = buf_key.value;
				//printf("keyboard = %d state = %d\n",buf_key.code,buf_key.value);

				par[0] = m_bkey;
				par[1] = m_ckeyboard;
				ipc->IPCSendMsg(KEYBOARD_ID,par,8);
			}
		}
	}
}
event::~event()
{
	// TODO Auto-generated destructor stub
}

event* event::getInstance()
{
	if (NULL ==instance)
	{
		instance = new event();
	}
	return instance;

}

