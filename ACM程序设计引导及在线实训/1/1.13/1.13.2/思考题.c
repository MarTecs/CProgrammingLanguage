

/*编写一个函数，

	int MyItoa(char *s)
	其功能是将 s 中以字符串形式存放的非负整数，转换成相应整数返回。例如，如果 s
	中存放字符串 “1234”，则该函数的返回值就是 1234。假设 s 中的字符全是数字，且不考虑 s 是空串或 s 太长的情况
*/
#include<stdio.h>
#include<string.h>
int MyItoa(char *s)
{
	int num = 0,i;
	for(i = 0; i < sizeof(s) - 1; i++)
	{
		if((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			num *= 10;
			num += (*(s + i) - 48);
		}
		else if(*(s + i) == '\0')
		{
			printf("结束\n");
			return num;
		}
		else
		{
			printf("Error\n");
			return -1;
		}
	}
	return num;
}

int main()
{
	char num[] = "12034";
	int n = MyItoa(num);
	printf("%d\n",n);
	return 0;
}
