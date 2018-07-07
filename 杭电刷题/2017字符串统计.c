#include <stdio.h>
int main()
{
    int n,count;
    char ch;
    while(scanf("%d", &n) != EOF)
    {
        count = 0;
        while((ch = gets()) != EOF )
        {
            if(ch >= '0' && ch <= '9')
                count++;
        }
        printf("%d\n",count);
    }


    return 0;
}

