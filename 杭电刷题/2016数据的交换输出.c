#include <stdio.h>
int main()
{
    int n,min,temp,i;
    while(scanf("%d",&n) != EOF)
    {
        temp = 0;
        if(n == 0)
            break;
        int num[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d",&num[i]);
            if(i == 0)
                min = num[0];
            if(min > num[i])
            {
                min = num[i];
                temp = i;
            }
        }
        num[temp] = num[0];
        num[0] = min;
        for(i = 0; i < n; i++)
        {
            if(i == n - 1)
            {
                printf("%d\n", num[i]);
                break;
            }
            printf("%d ",num[i]);
        }
    }
    return 0;
}
