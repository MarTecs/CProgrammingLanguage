#include<stdio.h>
/*自己的代码*/
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
			//至少有多少只动物 
			printf("%d", totalLeg / 4 + totalLeg % 4 / 2 );
			//至多有多少只动物 
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
书上代码 

#include <stdio.h>
void main( )
{
	int nCases, i, nFeet; //nCases 表示输入测试数据的组数，nFeet 表示输入的脚数。
	scanf("%d", &nCases);
	for(i = 0; i < nCases; i++){
		scanf("%d", &nFeet);
		if(nFeet %2 != 0) // 如果有奇数只脚，则输入不正确，
			// 因为不论 2 只还是 4 只，都是偶数
			printf("0 0\n");
		else if (nFeet%4 != 0) //若要动物数目最少，使动物尽量有 4 只脚
			//若要动物数目最多，使动物尽量有 2 只脚
			printf("%d %d\n", nFeet / 4 + 1, nFeet / 2);
		else 
			printf("%d %d\n", nFeet / 4, nFeet / 2);
	}
} 
*/ 
