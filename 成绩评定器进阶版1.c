#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");
	int i,a,b;
	
for(i=1;i<=5;i++){
	printf("\n---正在测评第%d位同学---\n",i);
	printf("请输入平时分：");
	scanf("%d",&a);
    while(getchar()!='\n');
	printf("请输入期末考分：");
	scanf("%d",&b);
    while(getchar()!='\n');
	if(a>100||a<0||b>100||b<0){
		printf("分数不合规！！！\n");
		
	}else if(a+b>180){
		printf("你真牛逼！！\n");
	}else{
		printf("老弟你还得练！！！\n");
	}
	 
}
getchar();
return 0;
}
