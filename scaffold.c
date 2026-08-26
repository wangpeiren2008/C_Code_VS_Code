#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct product{
    char name[20];
    int price;  
};
void inputproduct(struct product p[],int count);
void printproduct(struct product p[],int count);
int main() {
    system("chcp 65001 > nul");
    struct product p[3];
    int choice;
    while(1) {
       printf("\n1.录入商品\n2.打印商品\n3.退出\n");
       printf("请输入你的选择:");
       scanf("%d",&choice);
       while(getchar()!='\n');
    
    if(choice==1) {
        inputproduct(p,3);
    } else if(choice==2) {
        printproduct(p,3);
    } else if(choice==3) {
        printf("程序已退出！\n");
        break;
    } else {
        printf("无效的选择，请重新输入！\n");
    }
}
getchar();
return 0;
}
void inputproduct(struct product p[],int count) {
    int i;
    for(i=0;i<count;i++) {
        printf("请输入第%d个商品的名称:",i+1);
        scanf("%s",p[i].name);
        while(getchar()!='\n');
        printf("请输入第%d个商品的价格:",i+1);
        scanf("%d",&p[i].price);
        while(getchar()!='\n');
    }
}
void printproduct(struct product p[],int count) {
    int i;
    printf("========商品库存清单========\n");
    for(i=0;i<count;i++) {
        printf("商品：%s\n",p[i].name);
        printf("价格：%d\n",p[i].price);
    }
}