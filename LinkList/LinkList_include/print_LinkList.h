//
// Created by Erzbir on 2022/4/15.
//

#ifndef C_PROGRAM_PRINT_LINKLIST_H
#define C_PROGRAM_PRINT_LINKLIST_H
#include "struck_LinkList.h"
#endif //C_PROGRAM_PRINT_LINKLIST_H
void Print_LinkList(LinkList L)
{
    LNode *p;
    p=L->next;
    if(!L->data)
    {
        while(p)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    }
    else
    {
        if(L->next!=NULL)
        {
            Print_LinkList(L->next);
            printf("%d ",L->data);
        }
        else
        {
            while(L)
            {
                printf("%d ",L->data);
                L=L->next;
            }
        }
    }
}