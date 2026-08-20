#include<stdio.h>
#include<stdlib.h>//新添加的头文件，用来支持随机数
#include<time.h>//新添加的头文件，用来支持时间
int main(){
	system("chcp 65001");
srand((unsigned)time(NULL));//播下随机数的种子 
int target=rand()%100+1;//生成1到100的随机数 
int count=0;//用来记录猜了几次 
int guess;
//只在游戏开始前显示一次
printf("<调试模式>正确答案是：%d\n",target);
printf("游戏开始！请输入一个1-100之间的数字\n"); 
while(1){
	printf("请输入你猜的数字（1-100）:");
	scanf("%d",&guess);
    while(getchar()!='\n');
	count=count+1;//或者写成count++ 
	if(guess>target){
		printf("你猜大了！\n");
	}else if(guess<target){
		printf("你猜小了！\n");
	}else{
		printf("恭喜你，猜对了！你一共猜了%d次\n",count);
		break;//猜对了就跳出循环 
	}
}
getchar();
return 0;
}