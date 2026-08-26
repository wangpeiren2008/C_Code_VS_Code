#include<stdio.h>
#include<stdlib.h>
void changebyvalue(int x){
    x=100;
    printf("在changebyvalue函数里,x的值变成了%d\n",x);
}
void changebypointer(int *p){
    *p=200;
    printf("在changebypointer函数里,*p的值变成了%d\n",*p);
}
int main() {
    system("chcp 65001 > nul");
    int num=10;
    printf("初始化:num的值为:%d\n",num);
    //调用普通函数
    changebyvalue(num);
    printf("调用changebyvalue函数后,num的值为:%d\n",num);
    //调用指针函数
    changebypointer(&num);
    printf("调用changebypointer函数后,num的值为:%d\n",num);
    getchar();
    return 0;
}