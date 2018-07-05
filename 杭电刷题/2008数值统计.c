#include <stdio.h>
int main()
{
    int n,a,b,c;
    while(scanf("%d",&n) != EOF)
    {
        /*这里之前没有看题，要输入0，则输入结束，不作处理*/
        if(n == 0)
            break;
        /***********/
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
