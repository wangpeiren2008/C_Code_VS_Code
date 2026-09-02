#include<stdio.h>
#include<stdlib.h>
void calcboth(int a,int b,int *sum,int *diff){
    *sum=a+b;
    *diff=a-b;
}
int main() {
    system("chcp 65001>nul");
    int x=10;
    int y=3;
    int resultsum=0;
    int resultdiff=0;
    calcboth(x,y,&resultsum,&resultdiff);
    printf("和为：%d\n",resultsum);
    printf("差为：%d\n",resultdiff);
    getchar();
    return 0;
}
