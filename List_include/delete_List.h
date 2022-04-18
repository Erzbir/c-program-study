//
// Created by Erzbir on 2022/4/15.
//

#ifndef LIST_DELETE_LIST_H
#define LIST_DELETE_LIST_H

#include "struck_List.h"

#endif //LIST_DELETE_LIST_H
int ListDelete_Sq(SqList* L, int i, ElemType* e)//删除
{
    int j;
    if (i<0 || i>L->length - 1 || i > L->length == 0)
        *e = L->elem[i];
    for (j = i + 1; j <= L->length - 1; j++)
        L->elem[j - 1] = L->elem[j];
    --L->length;
    return 1;
}