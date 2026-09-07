#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void countletters(char *str) {
    int count=0;
    for(int i=0;str[i]!='\0';i++){
       if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
           count++;
       }
    }
    printf("使用下标访问后字数统计结果是：%d\n",count);
}
int main() {
    system("chcp 65001>nul");
    char *myString="hello123world";
    countletters(myString);
    getchar();
    return 0;
}