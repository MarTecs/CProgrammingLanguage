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

/*数组按列输出*/
void printTwoDimensionArrayByCol(int *num)
{
	int i,j;
	for(i = 0; i < COL; i++)
	{
		for(j = 0; j < ROW; j++)
		{
			printf("%d\t",*(num + j * ROW + i));	
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
	printTwoDimensionArrayByCol(a);
	return 0;
}
