#include <stdio.h>
#include <stdlib.h>
int main()
{
    int select;
    int i, j;
    int score[5][7];
    //赋初值
    int averge = 0;
    int sum = 0;
    do {
        printf("本程序有4项功能：\n");
        printf("1.根据学号查询学生的成绩\n");
        printf("2.根据考试号统计成绩\n");
        printf("3.根据考试号和学号查询成绩\n");
        printf("4.成绩录入\n");
        printf("0.退出\n");
        printf("请选择输入(0-4):");
        scanf("%d", &select);
        switch (select)
        {
            case 0:
                exit(0);
                break;
            case 1:
                printf("请输入学号：");
                scanf("%d\n", &i);
                for(j = 1; j < 7; j++)
                
            default:
                break;
        }

    }
}