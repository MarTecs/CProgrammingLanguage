#include <stdio.h>
int main()
{
    int n,m,i,j,tmp;
    double sum;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        tmp = 0,j = 0;
        int num[n], sum[(n % m == 0) ? (n / m) : (n / m + 1)];
        sum[0] = 0;
        for(i = 0; i < n; i++)
        {
            tmp++;
            num[i] = 2 * (n + 1);
            sum[j] += num[i];
            if((tmp % m == 0))
            {
                j++;
                sum[i / m + 1] = 0;
            }
        }

    }


}
