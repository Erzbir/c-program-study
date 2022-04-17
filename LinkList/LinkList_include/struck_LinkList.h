//
// Created by Erzbir on 2022/4/15.
//
#ifndef C_PROGRAM_STRUCK_LINKLIST_H
#define C_PROGRAM_STRUCK_LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
#endif //C_PROGRAM_STRUCK_LINKLIST_H

