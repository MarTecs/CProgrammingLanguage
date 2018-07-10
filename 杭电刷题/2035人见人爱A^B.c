#include <stdio.h>
int main()
{
    int A,B,res,num,i;
    while(scanf("%d %d",&A,&B) != EOF)
    {
        res = 1;
        if((A == 0) && (B == 0))
            break;

        for(i = 0; i < B; i++)
        {
            res = (A  % 1000) * (res % 1000);
        }
        printf("%d\n", (res % 1000));
    }
    return 0;
}
