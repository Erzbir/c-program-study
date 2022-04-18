//
// Created by Erzbir on 2022/4/15.
//

#ifndef LIST_INIT_LIST_H
#define LIST_INIT_LIST_H

#include "struck_List.h"

#endif //LIST_INIT_LIST_H
int InitList_Sq(SqList* L)//初始化
{
    L->elem = (ElemType*)malloc(INIT_SIZE * sizeof(ElemType));
    if (!L->elem)return -1;
    L->length = 0;
    L->listsize = INIT_SIZE;
    return 1;
}
