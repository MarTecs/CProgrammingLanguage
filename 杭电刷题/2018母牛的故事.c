#include <stdio.h>

int sum(int n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else if(n == 3)
        return 3;
    else
        return sum(n-3) + sum(n-1);
}

int main()
{
    int n,i;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0)
            break;
        printf("%d\n",sum(n));
    }
    return 0;
}
