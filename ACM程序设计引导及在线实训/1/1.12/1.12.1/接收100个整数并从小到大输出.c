/*
	����100������������С������� 
	����ѡ���������ȴ�N�����ҵ���С�ŵ���1����Ȼ���N-1�����ҵ���С�ŵ���1�����Դ����� 
	
	�����е�С���� 
*/ 

#include<stdio.h>
#define MAX_NUM 5
int main()
{
	//indexΪ�ҵ�����СԪ���������е��±�,minΪ��С���Ǹ�����tempΪ��ʱ����������� 
	int i,j,temp,min,index;
	int an[MAX_NUM];
	
	//����100������ 
	for( i = 0; i < MAX_NUM; i++ )
		scanf("%d", &an[i]);
	
	
	//����ѡ������ 
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
		
		/*�����ҵ�����С��Ԫ�غ͸�λ�õ�Ԫ��*/
		temp = an[i];
		an[i] = min;
		an[index] = temp;
	}
		
	
	for( i = 0; i < MAX_NUM; i++ )
		printf("%d\t", an[i]);
	
	return 0;
}
