#include <stdio.h>
int main()
{
    int n,num,i;
    double sum;
    while(scanf("%d", &n) != EOF)
    {

        while(n--)
        {
            sum = 0;
            scanf("%d", &num);
            for(i = 1; i <= num; i++)
            {
                if(i % 2 != 0)
                    sum += (1.0 / i);
                else
                    sum = sum - (1.0 / i);
            }
            printf("%.2lf\n",sum);
        }
    }
    return 0;
}
