#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//定义一个大盒子，叫student
struct student{
    char name[20];
    int score[3];
};
int main(){
    system("chcp 65001");
    struct student class[5];
    strcpy(class[0].name,"张三");
    class[0].score[0]=90;
    class[0].score[1]=85;
    class[0].score[2]=92;
    strcpy(class[1].name,"李四");
    class[1].score[0]=88;
    class[1].score[1]=78;
    class[1].score[2]=95;
    printf("全班共有五个人，这是前两名：\n");
    printf("第一个学生：%s,成绩：%d %d %d\n",class[0].name,class[0].score[0],class[0].score[1],class[0].score[2]);
    printf("第二个学生：%s,成绩：%d %d %d\n",class[1].name,class[1].score[0],class[1].score[1],class[1].score[2]);
    getchar();
    return 0;
}
