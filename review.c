#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int score[3];
};
void inputstudent(struct student class[],int count);
void printstudent(struct student class[],int count);
int main() {
    system("chcp 65001 > nul");
    struct student class[5];
    inputstudent(class,5);
    printstudent(class,5);
    getchar();
    return 0;
}
void inputstudent(struct student class[],int count) {
    int i,j;
    for(i=0;i<count;i++) {
        printf("请输入第%d个学生的名字:",i+1);
        scanf("%s",class[i].name);
        while(getchar()!='\n');
        for(j=0;j<3;j++) {
            printf("请输入第%d门课的成绩:",j+1);
            scanf("%d",&class[i].score[j]);
            while(getchar()!='\n');
        }
        printf("-------------------------------\n");
    }
}
void printstudent(struct student class[],int count) {
    int i;
    printf("========全班成绩单========\n");
    for(i=0;i<count;i++) {
        printf("学生：%s\n",class[i].name);
        printf("成绩：%d %d %d\n",class[i].score[0],class[i].score[1],class[i].score[2]);
    }
}