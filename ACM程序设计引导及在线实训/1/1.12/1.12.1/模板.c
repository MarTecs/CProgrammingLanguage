#include<stdio.h>
#define MAX_NUM 10

/*输出数组*/ 
void printArray(int *n)
{
	int i;
	for( i = 0; i < MAX_NUM; i++ )
	{
		printf("%d\t", *(n + i));
	}
}

/*输入数组*/
void scanArray(int *n)
{
	int i;
	for (i = 0; i < MAX_NUM; i++)
	{
		scanf("%d",&(*(n+i)));
	}
}

int main()
{
	int an[MAX_NUM];
	scanArray(an);
	printArray(an);
} 


