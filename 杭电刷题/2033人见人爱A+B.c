#include <stdio.h>
int main()
{
    int N,AH,AM,AS,BH,BM,BS,RH,RM,RS;
    while(scanf("%d", &N) != EOF)
    {
        while(N--)
        {
            scanf("%d %d %d %d %d %d", &AH, &AM, &AS, &BH, &BM, &BS);
            RS = (BS + AS) % 60;
            RM = (AM + BM + ((BS + AS) / 60)) % 60;
            RH = AH + BH + (AM + BM + ((BS + AS) / 60)) / 60;
            printf("%d %d %d\n", RH, RM, RS);
        }
    }
    return 0;
}
