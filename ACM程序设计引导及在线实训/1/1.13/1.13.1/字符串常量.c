#include<stdio.h>
int main()
{
	
	char s[] = "He said:\"I am a stu\\dent.\"";	//����ֻռ����27���ַ��ĳ���\"ֻռ��1�� 
	char d[] = ""; 								//����ռ����1���ַ��ĳ��� 
	printf("%d %d\n",sizeof(s), sizeof(d));	
	return 0;
	
	
} 
