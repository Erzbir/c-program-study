//
// Created by Erzbir on 2022/4/15.
//

#ifndef LIST_STRUCK_LIST_H
#define LIST_STRUCK_LIST_H
#include<stdlib.h>
#include<stdio.h>
#define INIT_SIZE 5
#define INCREMENT 2
typedef int ElemType;
typedef struct
{
    ElemType* elem;
    int length;
    int listsize;
}SqList;
#endif //LIST_STRUCK_LIST_H