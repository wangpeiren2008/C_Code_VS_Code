#include<stdio.h>
#include<stdlib.h>
int findmax(int arr[],int count,int*maxindex){
    int i;
    int maxval=arr[0];
    *maxindex=0;
    for(i=1;i<count;i++){
        if(arr[i]>maxval){
            maxval=arr[i];
            *maxindex=i;
        }
    }
    return maxval;
}
int main() {
    system("chcp 65001>nul");
    int num[5]={12,45,8,76,33};
    int maxpos=-1;
    int maxnum=findmax(num,5,&maxpos);
    printf("最大值是:%d\n",maxnum);
    printf("他在第%d个位置（从零开始数）\n",maxpos);
    getchar();
    return 0;
}