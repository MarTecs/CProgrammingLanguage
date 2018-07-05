#include <stdio.h>
int main()
{
    int n,i,number,sum;
    while(scanf("%d",&n) != EOF)
    {
        sum = 1;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &number);
            if(number % 2 != 0)
                sum *= number;
        }
        printf("%d\n",sum);
    }

    return 0;
}
