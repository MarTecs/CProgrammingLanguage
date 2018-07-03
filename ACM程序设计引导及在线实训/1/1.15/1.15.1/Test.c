#include<stdio.h>


//只定义一个结构体
struct Student {
    unsigned  ID;
    char szName[20];
    float fGPA;
};

//定义了一个结构体，同时定义了两个结构体变量stu1,stu2，都是Student类型
struct Student1 {
    unsigned  ID;
    char szName[20];
    float fGPA;
}stu1, stu2;

int main()
{
    stu1.ID = 1;
    printf("%u\t",stu1.ID);


    return 0;
}
