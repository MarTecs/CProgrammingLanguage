

/*书上示例程序*/

#include<stdio.h>
#include<string.h>
int main()
{
	char szTitle[] = "Prison Break";
	char szHero[100] = "Michael scofield";
	char szPrisonName[100];
	char szResponse[100];
	printf("What's the name of the prison in %s?\n", szTitle);
	scanf( "%s", szPrisonName);
	if( strcmp( szPrisonName, "Fox-River") == 0 ) {		//如果返回结果为0，则说明比较结果一致 
		printf("Yeah! Do you love %s?\n", szHero);
	}
	else {
		strcpy( szResponse, "It seems you haven't watched it!\n");	//将后面的内容拷贝到前面的数组中。 
		printf( szResponse);
	}
	szTitle [0] = 't';
	szTitle [3] = 0; //等效于 szTitle [3] = ‘\0’; 因为C/C++在处理字符串时认为遇到\0就会就认为字符串结束了，因此将会输出tri 
	printf(szTitle);
	return 0;
 } 
