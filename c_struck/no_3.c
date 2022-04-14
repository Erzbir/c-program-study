#include <stdio.h>
#include <stdlib.h>
#define N 3
typedef struct Student{
    int num;
    float score;
    struct Student *next;
}Node,*list;
list creat_list(void){
    Node *p;
    list L=NULL;
    int i;
    for(i=0;i<N;i++)
    {
        p=(Node*)malloc(sizeof(Node));
        printf("\n输入第%d个学生的“学号，成绩“:",i);
        scanf("%d,%f",&p->num,&p->score);
        p->next=L;
        L=p;
    }
    return L;
}
void print(list L){
    Node *p;
    p=L->next;
    if(!L->num)
    {
        while(p)
        {
            printf("%d %f \n",p->num,p->score);
            p=p->next;
        }
    }
    else
    {
        if(L->next!=NULL)
        {
            print(L->next);
            printf("%d %f \n",L->num,L->score);
        }
        else
        {
            while(L)
            {
                printf("%d %f \n",L->num,L->score);
                L=L->next;
            }
        }
    }
}
int main(){
    list L_1;
    L_1=creat_list();
    print(L_1);
    return 0;
}
