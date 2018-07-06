#include <stdio.h>
int main()
{
    int n,m,i,j;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        int num[n],sum[(n % m == 0) ? n / m : n / m + 1],j = 0;
        for(i = 0; i < n; i++)
        {
            num[i] = 2 * (n + 1);
            if(j % m == 0)
            {
                j = j / m;
                sum[j] = 0;
            }
            if((n % m != 0) && (n > j * m))
            {
                sum[n / m + 1] = 0;
            }
            sum[j] += num[i];
            j++;
        }
        for( i = 0; i < sizeof(sum) / 4; i++)
            printf("%d\t",sum[i]);
        for( i = 0; i < sizeof(sum) / 4 - 1; i++)
        {
            printf("%d",m);
            printf("%.2lf ",sum[i] * 1.0 / m);
        }
        printf("%.2lf\n", sum[n / m - 1] * 1.0 / (n % m));
    }
    return 0;
}

/*
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
            num[i] = 2 * (n + 1);
            sum[j] += num[i];
            if((i + 1) % m == 0)
            {
                sum[];
            }
            tmp++;
        }

    }


}
*/
