#include<stdio.h>
#include<stdlib.h>
int main() {
    system("chcp 65001 > nul");
    int arr[4]={5,8,16,7};
    int *p=arr;
    for(int i=0;i<4;i++){
        printf("第%d个元素是:%d\n",i+1,arr[i]);
    }
    for(int i=0;i<4;i++){
        printf("第%d个元素是:%d\n",i+1,*(p+i));
    }
    for(int i=0;i<4;i++){
        *(p+i)=*(p+i)*4;
    }
    for(int i=0;i<4;i++){
        printf("第%d个元素是:%d\n",i+1,*(p+i));
    }
    getchar();
    return 0;
}