

/*����ʾ������*/

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
	if( strcmp( szPrisonName, "Fox-River") == 0 ) {		//������ؽ��Ϊ0����˵���ȽϽ��һ�� 
		printf("Yeah! Do you love %s?\n", szHero);
	}
	else {
		strcpy( szResponse, "It seems you haven't watched it!\n");	//����������ݿ�����ǰ��������С� 
		printf( szResponse);
	}
	szTitle [0] = 't';
	szTitle [3] = 0; //��Ч�� szTitle [3] = ��\0��;
	printf(szTitle);
	return 0;
 } 
