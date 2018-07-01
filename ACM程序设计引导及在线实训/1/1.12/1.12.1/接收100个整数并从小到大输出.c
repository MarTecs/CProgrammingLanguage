#include<stdio.h>
#define MAX_NUM 100

/*输出数组*/ 
void printArray(int *n)
{
	int i;
	for( i = 0; i < MAX_NUM; i++ )
	{
		printf("%d\t", *(n + i));
	}
	printf("\n");
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
	
	int i,j,temp,index,min;			//min存放每次循环最小的数，temp存放临时数字，index存放最小的数对应的索引 
	for(i = 0; i < MAX_NUM; i++)
	{
		
		min = an[i];
		index = i;				//之前的问题就是这里没有初始化的问题 
		printArray(an);

		printf("min：%d\t", min);

		for(j = i + 1; j < MAX_NUM; j++)
		{
			if(min > an[j])
			{
				min = an[j];
				index = j;	
			}	
		}
		
		/*
		min = i;
		printArray(an);

		printf("1min：%d\t", min);

		for(j = i + 1; j < MAX_NUM; j++)
		{
			if(an[min] > an[j])
			{
				min = j;
			}	
		}
		
		temp = an[i];
		an[i] = an[min];
		an[min] = temp;	
		printf("min：%d\t", min);
		
		
		printArray(an);
		
		*/
		
		printf("min：%d\t", min);
		temp = an[i];
		an[i] = min;
		an[index] = temp;
		
		printArray(an);

			
	} 
	
	
	printArray(an);
} 


