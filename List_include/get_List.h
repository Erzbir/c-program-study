//
// Created by Erzbir on 2022/4/21.
//

#ifndef LIST_GET_LIST_H
#define LIST_GET_LIST_H
#include "struck_List.h"
#endif //LIST_GET_LIST_H


int GetList_Sq(SqList L, int i, ElemType *e)
{
    if(i<0||i>L.length-1)return -1;
    *e = L.elem[i];
    return 1;
}