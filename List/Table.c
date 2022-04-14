#include<stdlib.h>
#include<stdio.h>
#include<sys/malloc.h>
#define INIT_SIZE 5
#define INCREMENT 2
typedef int ElemType;
typedef struct
{
    ElemType* elem;
    int length;
    int listsize;
}SqList;
int InitList_Sq(SqList* L)//初始化
{
    L->elem = (ElemType*)malloc(INIT_SIZE * sizeof(ElemType));
    if (!L->elem)return -1;
    L->length = 0;
    L->listsize = INIT_SIZE;
    return 1;
}
int ListInsert_Sq(SqList* L, int i, ElemType e)//插入
{
    int j;
    ElemType* newbase;
    if (i<0 || i > L->length)  return -1;
    if (L->length >= L->listsize)
    {
        newbase = (ElemType*)realloc(L->elem, (L->listsize + INCREMENT) * sizeof(ElemType));
        if (!newbase)return -1;
        L->elem = newbase;
        L->listsize += INCREMENT;
    }
    for (j = L->length - 1; j >= i; j--)
        L->elem[j + 1] = L->elem[j];
    L->elem[i] = e;
    ++L->length;
    return 1;
}
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
int LocateElem_Sq(SqList L, ElemType e)//查询
{
    int i = 0;
    while (i < L.length && L.elem[i] != e)
        i++;
    if (i >= L.length)
        return -1;
    else return i;
}
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
int main()
{
    int i;
    SqList L1, L2, L3;
    InitList_Sq(&L1);
    InitList_Sq(&L2);
    InitList_Sq(&L3);
    for (i = 0; i < 5; i++)
        ListInsert_Sq(&L1, i, i + 1);
    for (i = 0; i < 5; i++)
        ListInsert_Sq(&L2, i, i + 1);
    for (i = 0; i < 7; i++)
        ListInsert_Sq(&L3, i, i + 1);
    margeList_Sq(L1, L2, &L3);
    for (i = 0; i < L3.length; i++)
        printf("%d\n", L3.elem[i]);
    return 0;
}

