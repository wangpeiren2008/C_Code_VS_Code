#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");
	int choice;
	int score[5];
	int i;
	for(i=0;i<5;i++){
		score[i]=0;
	}
	
	//下面是核心死循环，只要程序没被break，就会一直显示菜单 
	while(1){
		printf("\n=====欢迎使用班级成绩系统=====\n");
		printf("1.录入五位学生的成绩\n");
		printf("2.查看所有学生的成绩\n");
		printf("0.退出系统\n");
		printf("请输入你的选择（0-2）：");
		scanf("%d",&choice);
        while(getchar()!='\n');
		//根据用户的选择，走不同的分支
		if(choice==1){
			printf("\n-----进入<成绩录入>模式-----\n");
			for(i=0;i<5;i++){
				printf("请输入第%d位学生的成绩",i+1);
				scanf("%d",&score[i]);
                while(getchar()!='\n');
			}
			printf("录入完成\n");
		}else if(choice==2){
			printf("\n-----进入<成绩查询>模式-----\n");
			for(i=0;i<5;i++){
				printf("第%d位同学的分数:%d分",i+1,score[i]);
                while(getchar()!='\n');
			}
		}else if(choice==0){
			printf("感谢使用该系统，再见！\n");
			break;
		}else{
			printf("\n输入错误，请输入0，1或2\n");
		}
		 
	}
	getchar();
	return 0;
} 