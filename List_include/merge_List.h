//
// Created by Erzbir on 2022/4/15.
//

#ifndef LIST_MERGE_LIST_H
#define LIST_MERGE_LIST_H

#include "struck_List.h"

#endif //LIST_MERGE_LIST_H
int margeList_Sq(SqList LA, SqList LB, SqList* LC)
{
    int i = 0, j = 0, k = 0;
    LC->listsize = LA.length + LB.length;
    LC->elem = (ElemType*)malloc(LC->listsize * sizeof(ElemType));
    if (!LC->elem)return -1;
    while (i < LA.length && j < LB.length)
    {
        if (LA.elem[i] <= LB.elem[j])LC->elem[k++] = LA.elem[i++];
        else LC->elem[k++] = LB.elem[j++];
    }
    while (i < LA.length)LC->elem[k++] = LA.elem[i++];
    while (j < LB.length)LC->elem[k++] = LB.elem[j++];
    LC->length = k;
    return 1;
}
