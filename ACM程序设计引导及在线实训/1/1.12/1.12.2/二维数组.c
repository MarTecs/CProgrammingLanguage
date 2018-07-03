#include<stdio.h>
#define ROW 3
#define COL 2

void scanTwoDimensionArray(int *num)
{
	int i,j;
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d",&(*(num + i * ROW + j)));	
		}		
	}
}

void printTwoDimensionArray(int *num)
{
	int i,j;
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%d\t",*(num + i * ROW + j));	
		}		
		printf("\n");
	}
}

int main()
{
	int a[ROW][COL],i,j;
	scanTwoDimensionArray(a);
	printTwoDimensionArray(a);
	return 0;
}
