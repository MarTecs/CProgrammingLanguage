#include <stdio.h>
int main()
{
    int i;
    char ch[3];
    char min,max,mid,tmp;
    while(scanf("%c%c%c",&ch[0],&ch[1],&ch[2]) != EOF)
    {
        tmp = ch[0] > ch[1] ? ch[0] : ch[1];
        if(tmp > ch[2])
            max = tmp;
        else
            max = ch[2];

        tmp = ch[0] > ch[1] ? ch[1] : ch[0];
        if(tmp < ch[2])
            min = tmp;
        else
            min =ch[2];

        for(i = 0; i < 3; i++)
        {
            if(ch[i] == max || ch[i] == min)
                continue;
            mid = ch[i];
        }
        printf("%c %c %c\n",min,mid,max);
        /*�������ڲ�ˢ�»���������һ������qwe,�ڶ�������asd�ò�����Ҫ�Ľ��*/
        /*
            fflush����������stdio.hͷ�ļ��У�����ǿ�ƽ�������������д���ļ�����������ɹ�ˢ�£�fflush���᷵��0(ָ������û�л���������ֻ����Ҳ����0)������EOF����һ������
            ����ԭ�ͣ�int fflush(File *stream);
        */
        int a = fflush(stdin);
        printf("%d",a);
    }
    return 0;
}
