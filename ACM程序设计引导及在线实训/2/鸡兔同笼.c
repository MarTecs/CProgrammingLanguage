#include<stdio.h>
/*�Լ��Ĵ���*/
int main()
{
	int n;
	int totalLeg = 0;
	scanf("%d", &n);
	while( n-- )
	{
		scanf("%d", &totalLeg);
		if ( totalLeg % 2 == 0 )
		{
			//�����ж���ֻ���� 
			printf("%d", totalLeg / 4 + totalLeg % 4 / 2 );
			//�����ж���ֻ���� 
			printf(" %d", totalLeg / 2);
		}
		else
		{
			printf("0 0\n");
		}
	}
	return 0;
 } 
 
 
/*
���ϴ��� 

#include <stdio.h>
void main( )
{
	int nCases, i, nFeet; //nCases ��ʾ����������ݵ�������nFeet ��ʾ����Ľ�����
	scanf("%d", &nCases);
	for(i = 0; i < nCases; i++){
		scanf("%d", &nFeet);
		if(nFeet %2 != 0) // ���������ֻ�ţ������벻��ȷ��
			// ��Ϊ���� 2 ֻ���� 4 ֻ������ż��
			printf("0 0\n");
		else if (nFeet%4 != 0) //��Ҫ������Ŀ���٣�ʹ���ﾡ���� 4 ֻ��
			//��Ҫ������Ŀ��࣬ʹ���ﾡ���� 2 ֻ��
			printf("%d %d\n", nFeet / 4 + 1, nFeet / 2);
		else 
			printf("%d %d\n", nFeet / 4, nFeet / 2);
	}
} 
*/ 
