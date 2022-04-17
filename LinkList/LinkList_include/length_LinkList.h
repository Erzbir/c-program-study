//
// Created by Erzbir on 2022/4/15.
//
#ifndef C_PROGRAM_LENGTH_LINKLIST_H
#define C_PROGRAM_LENGTH_LINKLIST_H
#include "struck_LinkList.h"
#endif //C_PROGRAM_LENGTH_LINKLIST_H

int Length_LinkList(LinkList L)
{
    LNode *p=L;
    int i=0;
    while(p->next)
    {
        p=p->next;
        i++;
    }
    return i;
}


int Length_Linklist2(LinkList L)
{
    LNode *p=L;
    int i;
    if(p==NULL)return 0;
    i=1;
    while(p->next)
    {
        p=p->next;i++;
    }
    return i;
}