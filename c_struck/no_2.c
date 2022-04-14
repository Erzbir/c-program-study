//
//  main.c
//  c_struck
//
//  Created by Erzbir on 2022/4/6.
//

#include <stdio.h>
#define N 3
struct Student
{
    int num;
    char name[20];
    int score[4];
    float aver;
    int sum;
};


void input(struct Student stu[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("输入学生信息(学号,姓名):\n");
        scanf("%d,%s",&stu[i].num,&stu[i].name[20]);
        printf("输入该学生的四科成绩:\n");
        scanf("%d,%d,%d,%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
        stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4;
        stu[i].sum=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3]);
        
    }
}


void max(struct Student stu[])
{
    int i,m;
    struct Student tmp;
    for(i=1;i<N;i++)
    {
        for(m=0;m<N-1;m++)
        {
            if(stu[m].sum<stu[m+1].sum)
            {
                tmp=stu[m];
                stu[m]=stu[m+1];
                stu[m+1]=tmp;
            }
        }
    }
}


void print(struct Student stu[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("\n学号:%d,姓名:%s\n",stu[i].num,stu[i].name);
        printf("四科成绩:%d,%d,%d,%d,平均成绩:%f,总分:%d\n",stu[i].score[0],
stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].aver,stu[i].sum);
    }
}


void print_single(struct Student stu_1)
{
    printf("\n学号:%d,姓名:%s\n",stu_1.num,stu_1.name);
    printf("四科成绩:%d,%d,%d,%d,平均成绩:%f,总分:%d\n",stu_1.score[0],
           stu_1.score[1],stu_1.score[2],stu_1.score[3],stu_1.aver,stu_1.sum);
}


struct Student scanner(struct Student stu[],int num)
{
    int n;
    for(n=0;n<N;n++)
    {
        if(stu[n].num==num)
            return stu[n];
    }
    return stu[n];
}


int main()
{
    int num;
    struct Student stu[N],*p=stu;
    input(p);
    max(p);
    print(p);
    scanf("%d",&num);
    print_single(scanner(p,num));
    return 0;
}
