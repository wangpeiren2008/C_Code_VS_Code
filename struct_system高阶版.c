#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. 定义数据大盒子
struct student {
    char name[20];
    int score[3];
};

// 2. 函数声明
void inputStudent(struct student class[], int count);
void printStudents(struct student class[], int count);
void saveToFile(struct student class[], int count);
void readFromFile(struct student class[], int count);

// 3. 主函数
int main() {
    system("chcp 65001 > nul"); // 解决乱码

    struct student class[5];
    int choice;

    // 初始化
    for(int i = 0; i < 5; i++) {
        strcpy(class[i].name, "");
        for(int j = 0; j < 3; j++) {
            class[i].score[j] = 0;
        }
    }

    while(1) {
        printf("\n===== 学生成绩管理系统 =====\n");
        printf("1. 录入所有学生成绩\n");
        printf("2. 显示所有学生成绩\n");
        printf("6. 保存数据到文件\n");
        printf("7. 读取数据\n");
        printf("0. 退出系统\n");
        printf("请输入你的选择：");
        scanf("%d", &choice);
        while(getchar() != '\n');

        if(choice == 1) {
            inputStudent(class, 5);
        } else if(choice == 2) {
            printStudents(class, 5);
        } else if(choice == 6) {
            saveToFile(class, 5);
        } else if(choice == 7) {
            readFromFile(class, 5);
        } else if(choice == 0) {
            printf("感谢使用，再见！\n");
            break;
        } else {
            printf("输入错误！\n");
        }
    }
    
    getchar();
    return 0;
}

// 4. 录入函数
void inputStudent(struct student class[], int count) {
    int i, j;
    for(i = 0; i < count; i++) {
        printf("请输入第 %d 个学生的名字：", i + 1);
        scanf("%s", class[i].name);
        while(getchar() != '\n'); // 清空残留

        for(j = 0; j < 3; j++) {
            printf("请输入第 %d 门课的成绩：", j + 1);
            scanf("%d", &class[i].score[j]);
            while(getchar() != '\n');
        }
        printf("----------\n");
    }
}

// 5. 打印函数
void printStudents(struct student class[], int count) {
    int i;
    printf("\n===== 全班成绩单 =====\n");
    for(i = 0; i < count; i++) {
        printf("学生：%s\n", class[i].name);
        printf("成绩：%d %d %d\n", class[i].score[0], class[i].score[1], class[i].score[2]);
    }
}

// 6. 保存到文件
void saveToFile(struct student class[], int count) {
    FILE *fp = fopen("class_data.txt", "w");
    if(fp == NULL) {
        printf("保存失败！\n");
    } else {
        for(int i = 0; i < count; i++) {
            fprintf(fp, "%s %d %d %d\n", class[i].name, class[i].score[0], class[i].score[1], class[i].score[2]);
        }
        fclose(fp);
        printf("数据已成功保存！\n");
    }
}

// 7. 读取数据
void readFromFile(struct student class[], int count) {
    FILE *fp = fopen("class_data.txt", "r");
    if(fp == NULL) {
        printf("没有找到数据文件！\n");
    } else {
        for(int i = 0; i < count; i++) {
            fscanf(fp, "%s %d %d %d", class[i].name, &class[i].score[0], &class[i].score[1], &class[i].score[2]);
        }
        fclose(fp);
        printf("数据读取成功！现在按 2 可以查看成绩。\n");
    }
}