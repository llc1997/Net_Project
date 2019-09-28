#ifndef IP_LINK_H
#define IP_LINK_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct ip_link
{
    /* data */
    //这是路由表，
    char ip_network[16];    //Ip网段
    char ip_mask[16];       //掩码
    char ip_gateway[16];    //下一跳网关
    int ip_routenum;        //跳数
    struct IP_LINK *next;
}IP_LINK;

IP_LINK *ip_head = NULL;       //ip头指针变量
//功能：初始化IP链表
//参数：无
//返回值：空
 extern void init_ip_link(void);

 //功能：有序插入IP地址进链表IP_LINK
 //参数：IP_LINK*insert_ip_head ：IP链表的头指针
 //返回值：IP_LINK * : 新的头指针
 extern IP_LINK *insert_ip_link(IP_LINK *insert_ip_head);   

//查找IP的函数，在ip_head所指向的链表
extern IP_LINK *find_ip(IP_LINK *ip_head, unsigned char * recv_buff);

#endif