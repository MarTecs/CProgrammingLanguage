
#include <stdio.h>

int main()
{
    int start, end,i,j = 0,temp;
    while(scanf("%d %d", &start, &end) != EOF)
    {
        temp = 0;
        for(i = start; i <= end; i++)
        {
            if((i%10) * (i%10) * (i%10) + (i/10%10) * (i/10%10) * (i/10%10) + (i/100) * (i/100) * (i/100) == i)
            {
                temp++;
            }
        }
        j = 0;
        for(i = start; i <= end; i++)
        {
            if((i%10) * (i%10) * (i%10) + (i/10%10) * (i/10%10) * (i/10%10) + (i/100) * (i/100) * (i/100) == i)
            {
                printf("%d",i);
                j++;
                if(temp != j)
                    printf(" ");
            }

        }
        if(temp == 0)
            printf("no\n");
        else
            printf("\n");
    }

    return 0;
}
