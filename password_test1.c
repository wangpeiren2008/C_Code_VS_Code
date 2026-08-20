#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");
	int password=0;
	while(password!=123456){
		printf("请输入管理员密码：\n");
		scanf("%d",&password);
        while(getchar()!='\n');
		if(password!=123456){
			printf("密码错误，请重试！\n");
		}	
	}
	printf("密码正确，欢迎进入系统！\n");
	getchar();
	return 0;
}