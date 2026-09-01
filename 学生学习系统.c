#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int score[3];
};
void inputstudent(struct student text[],int count);
void printstudent(struct student text[],int count);
int main() {
    system("chcp 65001>nul");
    struct student text[5];
    inputstudent(text,5);
    printstudent(text,5);
    getchar();
    return 0;
}
void inputstudent(struct student text[],int count){
    int i;
    int j;
    for(i=0;i<count;i++){
        printf("请输入第%d位同学的姓名:",i+1);
        scanf("%s",text[i].name);
        while(getchar()!='\n');
        for(j=0;j<3;j++){
            printf("请输入第%d位同学的第%d门课成绩:",i+1,j+1);
            scanf("%d",&text[i].score[j]);
            while(getchar()!='\n');
        }
    }
}
void printstudent(struct student text[],int count){
    int i;
    int j;
    for(i=0;i<count;i++){
        printf("第%d位同学的姓名是:%s\n",i+1,text[i].name);
        for(j=0;j<3;j++){
            printf("第%d位同学的第%d门课成绩是:%d\n",i+1,j+1,text[i].score[j]);
        }
    }
}
