#include <stdio.h>
#define NUM 26

int main()
{
    int i = 0, j = 0;
    char cArray[26];

    //��ֵ��Ӧ�Ĵ�д��ĸ��cArray
    for(i = 0, j = 65; j < 91; i++, j++)
    {
        cArray[i] = j;
    }

    for(i = 0; i < 26; i++)
        printf("%2c",cArray[i]);    //%2cָ����2���ַ����ȣ����������������ַ����ո�������������ַ�����ʵ�ʵ��ַ�������
    getchar();
    return 0;
}
