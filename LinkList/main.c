//
//  main.c
//  LinkList
//
//  Created by Erzbir on 2022/4/7.
//

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;


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


LinkList MergeList_L(LinkList La,LinkList Lb)
{
    LNode *pa,*pb,*pc,*Lc;
    pa=La->next;pb=Lb->next;
    Lc=pc=La;
    while (pa&&pb)
    {
        if (pa->data<=pb->data)
        {
            pc->next=pa;
            pc=pa;pa=pa->next;
        }
        else
        {
            pc->next=pb;
            pc=pb;pb=pb->next;
        }
    }
    pc->next=pa?pa:pb;
    free(Lb);
    return Lc;
}


void Print_LinkList(LinkList L)
{
    LNode *p;
    p=L->next;
    if(!L->data)
    {
        while(p)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    }
    else
    {
        if(L->next!=NULL)
        {
            Print_LinkList(L->next);
            printf("%d ",L->data);
        }
        else
        {
            while(L)
            {
                printf("%d ",L->data);
                L=L->next;
            }
        }
    }
}

int main()
{
    int n,m,i,l;
    LinkList L_1,L_2,L_3,L_4,L_5;
    printf("\n输入第一个个链表的长度(rear):");
    scanf("%d",&l);
    L_5=CreatRear_LinkList(l);
    Print_LinkList(L_5);
    printf("\n请输入第一个链表的长度(head):");
    scanf("%d",&i);
    L_4=CreatHead_Linklist(i);
    Print_LinkList(L_4);
    printf("\n输入第一个链表的长度(endNhead):");
    scanf("%d",&n);
    L_1=Creat_LinkList(n);
    Print_LinkList(L_1);
    printf("\n输入第二个链表的长度(endNhead):");
    scanf("%d",&m);
    L_2=Creat_LinkList(m);
    L_3=MergeList_L(L_1, L_2);
    printf("\n合并后的链表:");
    Print_LinkList(L_3);
    printf("\n");
}
