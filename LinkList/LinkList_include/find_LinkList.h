//
// Created by Erzbir on 2022/4/15.
//
#ifndef C_PROGRAM_FIND_LINKLIST_H
#define C_PROGRAM_FIND_LINKLIST_H
#include "struck_LinkList.h"
#endif //C_PROGRAM_FIND_LINKLIST_H

LNode *Get_LinkList(LinkList L,int i)
{
    LNode *p=L;
    int j=-1;
    while(p->next!=NULL&&j<i)
    {
        p=p->next;j++;
    }
    if(j==1)return p;
    else return NULL;
}