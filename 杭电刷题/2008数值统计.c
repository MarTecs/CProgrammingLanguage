#include <stdio.h>
int main()
{
    int n,a,b,c;
    while(scanf("%d",&n) != EOF)
    {
        a = 0, b = 0, c = 0;
        while(n--)
        {
            double num;
            scanf("%lf",&num);
            if(num > 0)
            {
                c++;
            }else if(num == 0)
            {
                b++;
            }else{
                a++;
            }
        }
        printf("%d %d %d\n",a,b,c);
    }

    return 0;
}
