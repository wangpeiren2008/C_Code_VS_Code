#include<stdio.h>
#include<stdlib.h>
int main(){
	system("chcp 65001");
	int age=18;//建立一个盒子，里面装的是18
	printf("age这个盒子里面装的数字是%d\n",age);
	printf("age这个盒子里面存的地址是%p\n",&age);//这个是重点！！
	int *ptr=&age;//定义一个指针盒子，里面存的是age的地址
	printf("ptr这个盒子里面装的地址是%p\n",ptr);
	printf("通过ptr这个地址，拿到的数字是%d\n",*ptr);//重点！！
	getchar();
	return 0; 
}