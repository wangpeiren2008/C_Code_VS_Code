#include <stdio.h>
#include <stdlib.h>
// 函数声明
float getAverage(int arr[][3], int length);
void findMaxMin(int arr[][3], int length);
void printTable(char names[][20], int arr[][3], int length);

int main() {
    system("chcp 65001"); // 设置控制台为UTF-8编码，避免中文乱码
    int score[5][3];
    char names[5][20];
    int i, j, choice, hasData = 0;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            score[i][j] = 0;
        }
    }

    while(1) {
        printf("\n===== 学生成绩管理系统 =====\n");
        printf("1. 录入所有学生成绩\n");
        printf("2. 显示所有学生成绩\n");
        printf("3. 查看最高分与最低分\n");
        printf("4. 计算班级平均分\n");
        printf("5. 修改学生成绩\n");
        printf("0. 退出系统\n");
        printf("请输入你的选择 (0-5)：");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("\n--- 进入【成绩录入】---\n");
            for(i = 0; i < 5; i++) {
                printf("请输入第 %d 位学生的姓名：", i + 1);
                scanf("%s", names[i]);
                for(j = 0; j < 3; j++) {
                    do {
                        printf("请输入第 %d 位学生的第 %d 门课成绩 (0-100)：", i + 1, j + 1);
                        scanf("%d", &score[i][j]);
                        if(score[i][j] < 0 || score[i][j] > 100)
                            printf("分数不合法！请重新输入。\n");
                    } while(score[i][j] < 0 || score[i][j] > 100);
                }
            }
            hasData = 1;
            printf("--- 成绩录入完成！ ---\n");
        } 
        else if(choice == 2) {
            printf("\n--- 进入【查看成绩】---\n");
            if(hasData == 0) {
                printf("警告：还没有数据！\n");
            } else {
                printTable(names, score, 5);
            }
        } 
        else if(choice == 3) {
            printf("\n--- 进入【查最高/最低分】---\n");
            if(hasData == 0) {
                printf("警告：还没有数据！\n");
            } else {
                findMaxMin(score, 5);
            }
        } 
        else if(choice == 4) {
            printf("\n--- 进入【计算平均分】---\n");
            if(hasData == 0) {
                printf("警告：还没有数据！\n");
            } else {
                float classAvg = getAverage(score, 5);
                printf("本班 5 位同学的平均分是：%.2f 分\n", classAvg);
            }
        } 
         else if(choice == 5) {
    printf("\n--- 进入【修改学生成绩】---\n");
    if(hasData == 0) {
        printf("警告：还没有数据！请先录入数据再修改。\n");
    } else {
        int index;
        printf("请输入要修改的学生的座位号 (1-5)：");
        scanf("%d", &index);
        
        // 检查座位号是否合法（只能在1到5之间）
        if(index < 1 || index > 5) {
            printf("输入错误！座位号必须在 1 到 5 之间。\n");
        } else {
            // 将用户的 1~5 转为数组的 0~4 下标
            int realIndex = index - 1;
            
            printf("当前该学生信息：姓名 %s，成绩 %d %d %d\n", 
                   names[realIndex], 
                   score[realIndex][0], 
                   score[realIndex][1], 
                   score[realIndex][2]);
            
            printf("请输入新的姓名：");
            scanf("%s", names[realIndex]);
            
            printf("请输入新的语文成绩：");
            scanf("%d", &score[realIndex][0]);
            printf("请输入新的数学成绩：");
            scanf("%d", &score[realIndex][1]);
            printf("请输入新的英语成绩：");
            scanf("%d", &score[realIndex][2]);
            
            printf("--- 修改完成！ ---\n");
        }
    }
        }else if(choice == 0) {
            printf("感谢使用，再见！\n");
            break;
        } 
        else {
            printf("输入错误！只能输入0-5哦！\n");
        }
    }
    return 0;
}

// 计算平均分
float getAverage(int arr[][3], int length) {
    int sum = 0, i, j;
    for(i = 0; i < length; i++) {
        for(j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    return sum / (length * 3.0);
}

// 找最高/最低分
void findMaxMin(int arr[][3], int length) {
    int max = arr[0][0], min = arr[0][0], i, j;
    for(i = 0; i < length; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    printf("最高分是：%d 分\n", max);
    printf("最低分是：%d 分\n", min);
}

// 打印表格
void printTable(char names[][20], int arr[][3], int length) {
    int i, j;
    printf("--------------------------------------------------\n");
    printf("  排名  |  姓名  |  语文  |  数学  |  英语  |  总分\n");
    printf("--------------------------------------------------\n");
    for(i = 0; i < length; i++) {
        int sum = 0;
        for(j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        printf("  第%2d位  | %-6s |  %4d  |  %4d  |  %4d  |  %4d\n", 
               i + 1, names[i], arr[i][0], arr[i][1], arr[i][2], sum);
    }
    printf("--------------------------------------------------\n");
}
