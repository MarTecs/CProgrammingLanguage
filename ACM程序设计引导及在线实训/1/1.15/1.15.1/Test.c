#include<stdio.h>


//ֻ����һ���ṹ��
struct Student {
    unsigned  ID;
    char szName[20];
    float fGPA;
};

//������һ���ṹ�壬ͬʱ�����������ṹ�����stu1,stu2������Student����
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
