#include<stdio.h>


struct Date {
    int nYear;
    int nMonth;
    int nDay;

};


struct Student {
    unsigned ID;
    struct Date sDate;
    char sName[20];
    float sGPA;
};

int main()
{
    struct Student s1;

    s1.sDate.nYear = 1997;
    s1.sDate.nMonth = 2;
    s1.sDate.nDay = 22;
    s1.ID = 1;
   // s1.sName = "1";
    s1.sGPA = 3.73;

    //结构体的另一种初始化方式
    struct Student s2 = {2,{2011,2,22},'2',3.98};
    printf("学号：%d\n",s2.ID);
    printf("出生日期：%d年%d月%d日\n",s2.sDate.nYear,s1.sDate.nMonth,s1.sDate.nDay);
    printf("姓名：%s\n",s2.sName);
    printf("GPA：%f\n",s2.sGPA);


    //结构体指针
    struct Student *s = &s2;

    //通过结构体指针访问结构体变量的两种写法：
    printf("%d ", s->ID);
    printf("%d ", (*s).ID);

    return 0;
}
