#include<stdio.h>
#include<stdlib.h>
int main() {
    system("chcp 65001>nul");
    int n;
    printf("请输入你想存多少个数字：");
    scanf("%d",&n);
    while(getchar()!='\n');
    int *bob=(int *)malloc(n *sizeof(int));
    //安全检查
    if (bob==NULL) {
        printf("内存不足 ，申请失败！\n");
        return 0;
    }
    //再用这个动态数组存数据
    for(int i=0;i<n;i++){
        printf("请输入第%d个数字:",i+1);
        scanf("%d",&bob[i]);
        while(getchar()!='\n');
    }
    printf("\n你存入的数据是:\n");
    for(int i=0;i<n;i++){
        printf("%d",bob[i]);
    }
    printf("\n");
    //还给系统
    free(bob);
    getchar();
    return 0;
}