//
// Created by Erzbir on 2022/4/15.
//


#ifndef C_PROGRAM_CREAT_LINKLIST_H
#define C_PROGRAM_CREAT_LINKLIST_H
#include "struck_LinkList.h"
#endif //C_PROGRAM_CREAT_LINKLIST_H

LinkList CreatHead_Linklist(int n)
{
    int i;
    LNode *s;
    LinkList L = NULL;
    for(i=0;i<n;i++)
    {
        s=(LNode*)malloc(sizeof(LNode));
        printf("第%d个元素:",i);
        scanf("%d",&s->data);
        s->next=L;
        L=s;
    }
    return L;
}


LinkList CreatRear_LinkList(int n)
{
    LinkList L=NULL;
    LNode*s,*r=NULL;
    int i;
    for(i=0;i<n;i++)
    {
        s=(LNode*)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值:",i);
        scanf("%d",&s->data);
        if(!L)L=s;
        else r->next=s;
        r=s;
    }
    if(r!=NULL)r->next=NULL;
    return L;
}


LinkList Creat_LinkList(int n)
{
    LNode *L,*p,*q;
    int i;
    L=(LNode*)malloc(sizeof(LNode));
    L->next=NULL;
    q=L;
    for(i=0;i<=n-1;i++)
    {
        p=(LNode *)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值:",i);
        scanf("%d",&p->data);
        p->next=NULL;q->next=p;q=p;
    }
    return L;
}
