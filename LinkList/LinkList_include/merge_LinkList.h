//
// Created by Erzbir on 2022/4/15.
//
#ifndef C_PROGRAM_MERGE_LINKLIST_H
#define C_PROGRAM_MERGE_LINKLIST_H
#include "struck_LinkList.h"
#endif //C_PROGRAM_MERGE_LINKLIST_H

LinkList MergeList_L(LinkList La,LinkList Lb)
{
    LNode *pa,*pb,*pc,*Lc;
    pa=La->next;pb=Lb->next;
    Lc=pc=La;
    while (pa&&pb)
    {
        if (pa->data<=pb->data)
        {
            pc->next=pa;
            pc=pa;pa=pa->next;
        }
        else
        {
            pc->next=pb;
            pc=pb;pb=pb->next;
        }
    }
    pc->next=pa?pa:pb;
    free(Lb);
    return Lc;
}