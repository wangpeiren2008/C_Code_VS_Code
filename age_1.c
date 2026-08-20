#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");

	int age;
	
	printf("请输入你的年龄：");
	scanf("%d",&age);
    while(getchar()!='\n');
	printf("你今年%d岁了\n你明年就会是%d岁了\n你五年后会是%d岁\n",age,age+1,age+5);
	getchar();
	return 0; 
} 