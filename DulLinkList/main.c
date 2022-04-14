//
//  main.c
//  DulLinkList
//
//  Created by Erzbir on 2022/4/11.
//

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;

typedef struct DulNode
{
    ElemType data;
    struct DulNode *prior;
    struct DulNode *next;
}DulNode,*DulLinkList;


DulNode *init_DulNode(void)
{
    DulNode *p;
    p=(DulNode*)malloc(sizeof(DulNode));
    p->prior=p->next=p;
    return p;
}


void inselem(DulNode *L,ElemType e,DulNode *p)
{
    DulNode *s,*r;
    s=(DulNode*)malloc(sizeof(DulNode));
    s->data=e;
    r=p->prior;
    s->next=p;
    r->next=s;
    p->prior=s;
    s->prior=r;
}


void delem(DulLinkList L,ElemType *e,DulNode *p)
{
    DulNode *q,*r;
    q=p->prior;
    r=p->next;
    q->next=r;
    r->prior=q;
    *e=p->data;
    free(q);
}


void print(DulLinkList L,int n)
{
    DulNode *p;
    p=L->next;
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",p->data);
        p=p->next;
    }
}


int main()
{
    ElemType e;
    int i,n;
    DulNode *head;
    head=init_DulNode();
    printf("输入链表的长度:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("输入第%d个元素:",i);
        scanf("%d",&e);
        inselem(head, e, head);
    }
    print(head, n);
    printf("\n输入要删除的元素:");
    scanf("%d",&e);
    delem(head, &e, head->next);
    printf("末尾元素:%d\n",e);
    printf("删除后的链表:");
    print(head, n);
    return 0;
}
