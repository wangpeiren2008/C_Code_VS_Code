#include<stdio.h>
#include<stdlib.h>
int main() {
	system("chcp 65001");
	int score[5][3];
	float avg[5];
	int i,j;
	int sum;
	for(i=0;i<5;i++){
		printf("\n----请录入第%d位学生的成绩----\n",i+1);
		sum=0;
		for(j=0;j<3;j++){
			printf("请输入第%d门课的成绩:",j+1);
			scanf("%d",&score[i][j]);
            while(getchar()!='\n');
			sum=sum+score[i][j];
			
		}
		avg[i]=sum/3.0;
	}
	printf("\n==========成绩单==========\n");
	printf("学生\t语文\t数学\t英语\t平均分\n");
	for(i=0;i<5;i++){
		printf("第%d位学生的成绩\t",i+1);
		for(j=0;j<3;j++){
			printf("%d\t",score[i][j]);
		
		}
		printf("%.2f\n",avg[i]);
	}
	getchar();
	return 0;
}