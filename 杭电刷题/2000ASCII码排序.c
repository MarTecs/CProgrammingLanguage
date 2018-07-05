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
        /*这里由于不刷新缓冲区，第一次输入qwe,第二次输入asd得不到想要的结果*/
        /*
            fflush函数包含在stdio.h头文件中，用来强制将缓冲区的内容写入文件，如果函数成功刷新，fflush将会返回0(指定的流没有缓冲区或者只读打开也返回0)。返回EOF代表一个错误
            函数原型：int fflush(File *stream);
        */
        int a = fflush(stdin);
        printf("%d",a);
    }
    return 0;
}
