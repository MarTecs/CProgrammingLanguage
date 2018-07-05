#include <stdio.h>
int main()
{
    int num1,num2,sum, sum1,i,temp;
    while(scanf("%d %d",&num1,&num2) != EOF)
    {
        /*这里需要判断num1和num2的大小,否则将不会通过*/
        if(num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        sum = 0, sum1 = 0;
        for(i = num1; i <= num2; i++)
        {
            if(i % 2 != 0)
				sum1 += (i * i * i);
			else
				sum += (i * i);
        }
        printf("%d %d\n",sum,sum1);
    }
    return 0;
}

/*第一次写的代码，返回Wrong Answer

#include <stdio.h>
int main()
{
    int num1,num2,sum, sum1,i,temp;
    while(scanf("%d %d",&num1,&num2) != EOF)
    {
        sum = 0, sum1 = 0;
        for(i = num1; i <= num2; i++)
        {
            if(i % 2 != 0)
				sum1 += (i * i * i);
			else
				sum += (i * i);
        }
        printf("%d %d\n",sum,sum1);
    }
    return 0;
}

*/
