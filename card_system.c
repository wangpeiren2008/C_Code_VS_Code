#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct card{
    char name[20];
    char phone[20];
    char email[30];
};
void inputcard(struct card cards[],int count);
void printcard(struct card cards[],int count);
int main() {
    system("chcp 65001>nul");
    struct card cards[5];
  inputcard(cards,5);
  printcard(cards,5);
getchar();
return 0;
}
void inputcard(struct card cards[],int count) {
    int i;
    for(i=0;i<count;i++){
        printf("----录入第%d张名片----\n",i+1);
        printf("请输入名字:");
        scanf("%s",cards[i].name);
        while(getchar()!='\n');
        printf("请输入电话：");
        scanf("%s",cards[i].phone);
      while(getchar()!='\n');
      printf("请输入邮箱：");
      scanf("%s",cards[i].email);
      while(getchar()!='\n');
    }
}
void printcard(struct card cards[],int count) {
    int i;
    printf("\n=====名片列表=====\n");
    for(i=0;i<count;i++) {
        printf("【第%d张名片】\n",i+1);
        printf("姓名：%s\n",cards[i].name);
        printf("电话：%s\n",cards[i].phone);
        printf("邮箱：%s\n",cards[i].email);
        printf("----------------\n");
    }
}
