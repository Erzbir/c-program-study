#include "LinkList_include/creat_LinkLIst.h"
#include "LinkList_include/delete_LinkList.h"
#include "LinkList_include/length_LinkList.h"
#include "LinkList_include/merge_LinkList.h"
#include "LinkList_include/find_LinkList.h"
#include "LinkList_include/print_LinkList.h"
#include "LinkList_include/struck_LinkList.h"
int main()
{
    int n,m,i,l;
    LinkList L_1,L_2,L_3,L_4,L_5;
    printf("\n输入第一个个链表的长度(rear):");
    scanf("%d",&l);
    L_5=CreatRear_LinkList(l);
    Print_LinkList(L_5);
    printf("\n请输入第一个链表的长度(head):");
    scanf("%d",&i);
    L_4=CreatHead_Linklist(i);
    Print_LinkList(L_4);
    printf("\n输入第一个链表的长度(endNhead):");
    scanf("%d",&n);
    L_1=Creat_LinkList(n);
    Print_LinkList(L_1);
    printf("\n输入第二个链表的长度(endNhead):");
    scanf("%d",&m);
    L_2=Creat_LinkList(m);
    L_3=MergeList_L(L_1, L_2);
    printf("\n合并后的链表:");
    Print_LinkList(L_3);
    printf("\n");
    return 0;
}
