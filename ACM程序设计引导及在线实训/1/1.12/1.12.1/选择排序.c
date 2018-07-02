
#include<stdio.h>
#define MAX_NUM 5


/**
	@brief:��ӡ���������
	@param:�����ָ�� 
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
	@brief:Ϊ����Ԫ�ظ�ֵ
	@param:����ָ�� 
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
	@brief:ѡ�������㷨
	@param:����ָ�� 
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


/**
	@brief:ð������
	@param:����ָ�� 
**/
void bubbledSort(int *num)
{
	int i,j,min;
	for(i = 0; i < MAX_NUM - 1; i++)
	{
		for(j = 0; j < MAX_NUM - 1 - i; j++)			
		//������Ҫע����ÿ�ζ�������ŵ��������ÿ��ֻ��Ҫ��ǰ��ľͿ��� 
		{
			if(*(num + j) > *(num + j + 1))
			{
				min = *(num + j + 1);
				*(num + j + 1) = *(num + j);
				*(num + j) = min;
			}
		}
		printArray(num);
	}
}

int main()
{
	int num[MAX_NUM];
	scanArray(num);
	bubbledSort(num);
	printArray(num);
	return 0;
 } 
