#ifndef MAIN_CHILD_H
#define MAIN_CHILD_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>//htons
#include <netinet/ether.h>//ETH_P_ALL
#include <pthread.h>
#include "arp_pthread.h"
#include "arp_link.h"
#include "ip_pthread.h"
//#include "main.h"
#include "ip_link.h"
#include "key_pthread.h"
#include "get_interface.h"
/******************************************************************
函	数:	int main(int argc, char *argv[])
功	能:	主函数
参	数:	无
返回值: 无
*******************************************************************/
int main_child();	//字进程处理函数（主控函数）
int raw_sock_fd; 	//套接字声明

#endif