#include<stdio.h>
#include<stdlib.h>
int main() {
	int score[5];
	int i;
	int sum=0;
	for(i=0;i<5;i++) {
		printf("请输入第%d位学生的成绩：",i+1);
		scanf("%d",&score[i]);
		while(getchar()!='\n');
		sum=sum+score[i];
	} 
	int max=score[0];
	int min=score[0];
	for(i=1;i<5;i++){
		if(score[i]>max){
			max=score[i];
		}
		if(score[i<min]){
			min=score[i];
		}
	}
	float avg=sum/5.0;
	printf("\n-----统计数据-----\n");
	printf("最高分为%d分\n",max);
	printf("最低分为%d分\n",min);
	printf("平均分为%.2f分\n",avg);
	getchar();
	return 0;
	
	
	
}
