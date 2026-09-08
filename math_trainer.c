#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    system("chcp 65001>nul");
    srand(time(NULL));
    while(1){
    int a,b,answer;
    a=rand()%10+1;
    b=rand()%10+1;
    printf("请问%d加上%d等于多少\n",a,b);
    scanf("%d",&answer);
    while(getchar()!='\n');
    if(answer==a+b){
        printf("恭喜你答对了！\n");
    }else{
            printf("很遗憾，正确答案是 %d\n",a+b);
        }
        printf("请问还要继续吗？(y/n)\n");
        scanf("%c",&answer);
        while(getchar()!='\n');
        if(answer=='y'||answer=='Y'){
            continue;
        }else{
            printf("谢谢使用，再见！\n");
            break;
        }
   }    
        getchar();
        return 0;
}