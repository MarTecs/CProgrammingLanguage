#include <stdio.h>
#include <string.h> //因为用到了strlen()
int main()
{
    int n,i,temp;
    char ch[1001];
    while(scanf("%d",&n) != EOF)
    {
        while(n--)
        {
            temp = 0;
            scanf("%s", ch);
            int length = strlen(ch);
            for(i = 0; i < (length % 2 == 0 ? length / 2 : length / 2 + 1); i++)
            {
                if(ch[i] != ch[length - 1 - i])
                {
                    temp = 1;
                    printf("no\n");
                    break;
                }
            }
            if(temp == 1)
                break;
            else
                printf("yes\n");
        }
    }
    return 0;
}
