#include<stdio.h>
#define MAX_NUM 100

/*�������*/ 
void printArray(int *n)
{
	int i;
	for( i = 0; i < MAX_NUM; i++ )
	{
		printf("%d\t", *(n + i));
	}
	printf("\n");
}

/*��������*/
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
	
	int i,j,temp,index,min;			//min���ÿ��ѭ����С������temp�����ʱ���֣�index�����С������Ӧ������ 
	for(i = 0; i < MAX_NUM; i++)
	{
		
		min = an[i];
		index = i;				//֮ǰ�������������û�г�ʼ�������� 
		printArray(an);

		printf("min��%d\t", min);

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

		printf("1min��%d\t", min);

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
		printf("min��%d\t", min);
		
		
		printArray(an);
		
		*/
		
		printf("min��%d\t", min);
		temp = an[i];
		an[i] = min;
		an[index] = temp;
		
		printArray(an);

			
	} 
	
	
	printArray(an);
} 


