//
// Created by Erzbir on 2022/4/15.
//

#ifndef C_PROGRAM_DELETE_H
#define C_PROGRAM_DELETE_H
#include "struck_LinkList.h"
#endif //C_PROGRAM_DELETE_H

LinkList Delete_LinkList(LinkList L,int i,ElemType *e)
{
    LNode *p,*q;
    int j;
    p=L;
    j=-1;
    while(p->next&&j<i-1)
    {
        if(!(p->next)||j>i-1)return -1;
        q=p->next;
        *e=q->data;
        p->next=q->next;
        free(q);
        return 1;
    }
};