#include <stdio.h>
int main()
{
    int n,num,i;
    double sum,temp = 0;
    while(scanf("%d %d",&num,&n) != EOF)
    {
        sum = 0,temp = num;
        for(i = 0; i < n; i++)
        {
            sum += temp;
            temp = sqrt(temp);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
