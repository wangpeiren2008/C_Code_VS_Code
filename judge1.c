#include<stdio.h>
#include<stdlib.h>
int main() {
	int age;
	printf("请输入你的年龄：");
	scanf("%d",&age);
	while(getchar()!='\n');
	if(age>=18) {
		printf("恭喜你，你是成年人了！\n");
	} else {
		printf("你还是个未成年人，加油长大！\n");
	}
	getchar();
	return 0;
} 
