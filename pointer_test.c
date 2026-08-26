#include <stdio.h>
#include <stdlib.h>
int main() {
    system("chcp 65001 > nul");
    int a=10;
    int *p=&a;//p是一个指针，存的是a的地址；
    printf("变量a的值为:%d\n",a);
    printf("变量a的地址为:%p\n",&a);
    printf("指针p里面的地址为:%p\n",p);
    //修改指针p
    *p=20;
    printf("修改后的变量a的值为:%d\n",a);
    getchar();
    return 0;
}