#include <stdio.h>
int main()
{
    int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day,days,i;
    while(scanf("%d/%d/%d",&year,&month,&day) != EOF)
    {
        days = 0;
        for(i = 0; i < month - 1; i++)
        {
            days += months[i];
        }
        days += day;
        if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            days += 1;
        printf("%d\n",days);
    }
    return 0;
}
