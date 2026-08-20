#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");
	int age;
	printf("请输入您的年龄：");
	scanf("%d",&age);
    while(getchar()!='\n');
	if(age>=18&&age<=70) {
		printf("你可以报名\n");
	} else {
		printf("你不符合报名条件\n");
	}
	getchar();
	return 0;
}