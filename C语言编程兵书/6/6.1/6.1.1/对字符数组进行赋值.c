#include <stdio.h>
#define NUM 26

int main()
{
    int i = 0, j = 0;
    char cArray[26];

    //赋值相应的大写字母给cArray
    for(i = 0, j = 65; j < 91; i++, j++)
    {
        cArray[i] = j;
    }

    for(i = 0; i < 26; i++)
        printf("%2c",cArray[i]);    //%2c指的是2个字符长度，输出如果不够两个字符补空格，如果多于两个字符，按实际的字符长度来
    getchar();
    return 0;
}
