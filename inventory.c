#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct product{
    char name[20];
    int price;
};
void  inputproduct(struct product inventory[],int count);
void printproduct(struct product inventory[],int count);
int main() {
    system("chcp 65001 > nul");
    struct product inventory[3];
    inputproduct(inventory,3);
    printproduct(inventory,3);
    getchar();
    return 0;
}
void inputproduct(struct product inventory[],int count) {
    int i;
    for(i=0;i<count;i++) {
        printf("请输入第%d个商品的名称:",i+1);
        scanf("%s",inventory[i].name);
        while(getchar()!='\n');
        printf("请输入第%d个商品的价格:",i+1);
        scanf("%d",&inventory[i].price);
        while(getchar()!='\n');
        printf("-------------------------------\n");
    }
}
void printproduct(struct product inventory[],int count) {
    int i;
    printf("========商品库存清单========\n");
    for(i=0;i<count;i++) {
        printf("商品：%s\n",inventory[i].name);
        printf("价格：%d\n",inventory[i].price);
    }
}