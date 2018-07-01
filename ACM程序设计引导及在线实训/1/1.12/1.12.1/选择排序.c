
#include<stdio.h>
#define MAX_NUM 5


/**
	@brief:打印数组的内容
	@param:数组的指针 
*/ 
void printArray(int *num)
{
	int i;
	for(i = 0; i < MAX_NUM; i++)
	{
		printf("%d\t",*(num + i));
	} 
	printf("\n");
}



/**
	@brief:为数组元素赋值
	@param:数组指针 
**/
void scanArray(int *num)
{
	int i;
	for(i = 0; i < MAX_NUM; i++)
	{
		scanf("%d",&(*(num + i)));
	}
}


/**
	@brief:选择排序算法
	@param:数组指针 
**/
void selectionSort(int *num)
{
	int i,j,min,temp;
	for(i = 0; i < MAX_NUM; i++)
	{
		min = i;
		for(j = i + 1; j < MAX_NUM; j++)
		{
			if(*(num+min) > *(num+j))
			{
				min = j;
			}
		}
		
		temp = *(num+i);
		*(num+i) = *(num+min);
		*(num+min) = temp;
	}
	
	
	
}

int main()
{
	int num[MAX_NUM];
	scanArray(num);
	selectionSort(num);
	printArray(num);
	return 0;
	
	
 } 
