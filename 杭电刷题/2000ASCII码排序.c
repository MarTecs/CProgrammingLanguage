#include <stdio.h>
int main()
{
    int i;
    char ch[3];
    char min,max,mid,tmp;
    while(scanf("%c%c%c",&ch[0],&ch[1],&ch[2]) != EOF)
    {
        if(ch[0] >= ch[1])
            max = ch[0];

        printf("%c %c %c\n",min,mid,max);
        fflush(stdin);
    }
    return 0;
}
