#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char name[20]="hello,world";
    char *p=strchr(name,'o');
    if(p !=NULL) {
        *p='a';
        printf("修改后的字符串是:%s\n",name);
    }
    getchar();
    return 0;
}
