#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,i,j,temp,flag;
    while(scanf("%d %d", &x, &y) != EOF)
    {
        flag = 0;
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }else if((x == 0) && (y == 0))
        {
            break;
        }
        temp = 0;
        for(i = x; i <= y; i++)
        {
            temp = i * i + i + 41;
            for(j = 2; j <= sqrt(temp); j++)
            {
                if(temp % j == 0)
                {
                    flag++;
                    break;
                }
            }
        }
        if(0 == flag)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;
}
