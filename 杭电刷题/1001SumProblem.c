#include <stdio.h>
int main()
{
    int n,sum;
    while(scanf("%d",&n) != EOF)
    {
        sum = n;
        while(n--)
            sum += n;
        printf("%d\n\n",sum);
    }
    return 0;
}
