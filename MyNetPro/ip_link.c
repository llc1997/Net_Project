//#include "ip_link.h"

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

//ip初始化函数（主控）
void init_ip_link(void)
{
    printf("init_ip_link初始化Ip链表\n");
    //ip_head == NULL;


}

//查找IP的函数，在ip_head所指向的链表
IP_LINK *find_ip(IP_LINK *ip_head, unsigned char * recv_buff)
{
    IP_LINK *ip_find = ip_head;
    char ip_src[8];
    bzero(ip_src,sizeof(ip_src));
    memcpy(ip_src, recv_buff, 7);//mac，填充amc
    ip_src[7] = '\0';
#if 0

	if(ip_find == NULL)
		return NULL;
	while(ip_find->next != head){
		if(ip_find->ip_network == ip_src)
			return ip_find;
		ip_find = ip_find->next;		
	}	
	if(ip_find->ip_network == ip_src)
		return ip_find;	
	else
#endif 
		return ip_find;
}
#if 0
//删除IP链表节点（基本不用）
IP_LINK *delete_ip(IP_LINK *ip_head,char ip_del[4])
{
	IP_LINK *p = ip_head,*pb;
	if(head == NULL)
		return NULL;
	while(p->next != head){
		if(ip_del[0] == p->ip){//找出要删除的节点   
			if(p == head)//被删除的是头节点
				ip_head = ip_head->next;		
			break;
		}
		pb = p;
		p = p->next;		
	}
	if(p->m_time == m_time){//头、中间、结尾都需要交换
		p->next->front = p->front;
		p->front->next = p->next;	
		free(p);
		if(p == ip_head)//只有一个节点的情况
			return NULL;
		else
			return ip_head;
	}
	return ip_head;
}
#endif
