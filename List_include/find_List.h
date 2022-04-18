//
// Created by Erzbir on 2022/4/15.
//

#ifndef LIST_FIND_LIST_H
#define LIST_FIND_LIST_H

#include "struck_List.h"

#endif //LIST_FIND_LIST_H

int LocateElem_Sq(SqList L, ElemType e)//查询
{
    int i = 0;
    while (i < L.length && L.elem[i] != e)
        i++;
    if (i >= L.length)
        return -1;
    else return i;
}
