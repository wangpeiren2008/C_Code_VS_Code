#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int n);
int main() {
    system("chcp 65001>nul");
    int arr[5];
    printf("请输入五个数字:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        while(getchar()!='\n');
    }
    reverse(arr,5);
    getchar();
    return 0;
}
void reverse(int *arr,int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("逆序输出的结果是:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}