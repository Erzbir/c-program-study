//
// Created by Erzbir on 2022/4/15.
//

#ifndef LIST_INSERT_LIST_H
#define LIST_INSERT_LIST_H

#include "struck_List.h"

#endif //LIST_INSERT_LIST_H
int ListInsert_Sq(SqList* L, int i, ElemType e) {
    int j;
    ElemType *newbase;
    if (i < 0 || i > L->length) return -1;
    if (L->length >= L->listsize) {
        newbase = (ElemType *) realloc(L->elem, (L->listsize + INCREMENT) * sizeof(ElemType));
        if (!newbase)return -1;
        L->elem = newbase;
        L->listsize += INCREMENT;
    }
    for (j = L->length - 1; j >= i; j--)
    {
        L->elem[j + 1] = L->elem[j];
    }
    L->elem[i] = e;
    ++L->length;
    return 1;
}