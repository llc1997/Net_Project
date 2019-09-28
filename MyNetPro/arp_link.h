#ifndef ARP_LINK_H
#define ARP_LINK_H


typedef struct arp_link
{
    /* data */
    char arp_ip[4];         //ip地址
    char arp_mac[6];        //mac地址
    char arp_inter[12];       //发送的接口及网口，如ens33
    struct ARP_LINK *next;     //下一个ARP节点
}ARP_LINK;



#endif

