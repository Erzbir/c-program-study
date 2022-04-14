//
//  main.c
//  xax
//
//  Created by Erzbir on 2022/3/28.
#include <stdio.h>
#define N 3
typedef struct Student
{
    long int num;
    char name[20];
    char sex;
    int age;
    float score[3];
}* p;
void sq(struct Student stu[])
{
    int s,j=0;
    long int num;
    printf("输入学号:");
    scanf("%ld",&num);
    for(s=0;s<N;s++)
    {
        if(num==stu[s].num)
        {
            j=1;
            break;
        }
        else j=0;
    }
    if(j==1)printf("%ld,%s,%c,%d\n\n",stu[s].num,stu[s].name,stu[s].sex,stu[s].age);
    else printf("查无此人");
}
void sort(struct Student stu[])
{
    int i,j,k,sum=0;
    float adv[3];
    float temp;
    for(i=1;i<N;i++)
        for(j=0;j<N-i;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+stu[i].score[k];
            }
            adv[i]=sum/3;
            if(adv[i+1]>adv[i])
            {
                temp=adv[i+1];
                adv[i]=adv[i+1];
                adv[i+1]=temp;
            }
        }
    for(i=0;i<N;i++)
    {
        printf("%ld,%s,%c,%d,%d\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age);
        for(j=0;j<3;j++)
            printf("%f",adv[j]);
    }
}
float advan(int x,int y,int z)
{
    float score;
    score=(x+y+z)/3;
    return score;
}
int main()
{
    int i=0,j=0;
    struct Student stu[N];
    for(i=0;i<N;i++)
    {
        printf("学号，姓名，性别，年龄:");
        scanf("%ld,%s,%c,%d",&stu[i].num,&stu[i].name,&stu[i].sex,&stu[i].age);
        printf("成绩:");
        for(j=0;j<3;j++)
            scanf("%f",&stu[i].score[j]);
    }
    for(i=0;i<N;i++)
    {
        printf("%ld,%s,%c,%d,%d,%d,%d\n",stu[i].num,stu[i].name,stu[i].sex);
        for(j=0;j<3;j++)
            printf("%f",stu[i].score[j]);
    }
    //sq(stu);
    sort(stu);
    return 0;
}
