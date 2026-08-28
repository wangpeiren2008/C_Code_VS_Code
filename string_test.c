#include<stdio.h>
#include<stdlib.h>
int main() {
   
    char name[20]="Tom";
    printf("字符串是:%s\n",name);
    printf("第一个字符是:%c\n",name[0]);
    printf("第二个字符是:%c\n",name[1]);
    printf("第三个字符是:%c\n",name[2]);
    printf("第四个字符（隐藏的）是:%d\n",name[3]);
    getchar();
    return 0;
}