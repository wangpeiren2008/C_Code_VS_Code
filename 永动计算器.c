#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");
	while(1){
	int a;
	int b;
	printf("请输入第一个数字：");
	scanf("%d",&a);
    while(getchar()!='\n');
	printf("请输入第二个数字：");
	scanf("%d",&b);
    while(getchar()!='\n');
	printf("相加等于%d\n",a+b);
	printf("相减等于%d\n",a-b);
	printf("相乘等于%d\n",a*b);
	if(b!=0){
	printf("相除等于%d\n",a/b);
}else{
	printf("除数不能为0！\n");
}
	int sum=a+b;
	printf("两个数的和为%d\n",sum);
	int box;
	printf("是否继续？继续请按1，停止请按2\n");
	scanf("%d",&box);
    while(getchar()!='\n');
	if(box!=1){
		break;
	}
}
	getchar();
	return 0;
}