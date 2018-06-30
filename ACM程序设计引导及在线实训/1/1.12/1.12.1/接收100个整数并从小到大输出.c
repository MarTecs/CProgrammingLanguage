/*
	接收100个整数，并从小到大输出 
	采用选择排序：首先从N个数找到最小放到第1个，然后从N-1个数找到最小放到第1个，以此类推 
	
	程序有点小问题 
*/ 

#include<stdio.h>
#define MAX_NUM 5
int main()
{
	//index为找到的最小元素在数组中的下标,min为最小的那个数，temp为临时存放数而建立 
	int i,j,temp,min,index;
	int an[MAX_NUM];
	
	//输入100个整数 
	for( i = 0; i < MAX_NUM; i++ )
		scanf("%d", &an[i]);
	
	
	//进行选择排序 
	for( i = 0; i < MAX_NUM; i++ )
	{
		min = an[i];
		for( j = i; j < MAX_NUM; j++ )
		{
			if( an[j] < min )
			{
				
				index = j;
				min = an[j];
			}
		}
		
		/*交换找到的最小的元素和该位置的元素*/
		temp = an[i];
		an[i] = min;
		an[index] = temp;
	}
		
	
	for( i = 0; i < MAX_NUM; i++ )
		printf("%d\t", an[i]);
	
	return 0;
}
