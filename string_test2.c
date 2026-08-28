#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char name[20]="Tom";
    //求长度
    printf("Tom的长度是:%d\n",strlen(name));
    //拼接
    char greeting[30]="hello,";
    strcat(greeting,name);//把name拼到greeting后面
    printf("拼接之后:%s\n",greeting);
    //比较
    char a[10]="apple";
    char b[10]="apple";
    if (strcmp(a,b)==0) {
        printf("两个字符串是一样的\n");
    }
    getchar();
    return 0;
}