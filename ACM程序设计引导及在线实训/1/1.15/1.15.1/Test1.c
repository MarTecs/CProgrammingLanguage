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

    //�ṹ�����һ�ֳ�ʼ����ʽ
    struct Student s2 = {2,{2011,2,22},'2',3.98};
    printf("ѧ�ţ�%d\n",s2.ID);
    printf("�������ڣ�%d��%d��%d��\n",s2.sDate.nYear,s1.sDate.nMonth,s1.sDate.nDay);
    printf("������%s\n",s2.sName);
    printf("GPA��%f\n",s2.sGPA);


    //�ṹ��ָ��
    struct Student *s = &s2;

    //ͨ���ṹ��ָ����ʽṹ�����������д����
    printf("%d ", s->ID);
    printf("%d ", (*s).ID);

    return 0;
}
