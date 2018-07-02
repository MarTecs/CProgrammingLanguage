#include<stdio.h>
int main()
{
	
	char s[] = "He said:\"I am a stu\\dent.\"";	//这里只占用了27个字符的长度\"只占用1个 
	char d[] = ""; 								//这里占用了1个字符的长度 
	printf("%d %d\n",sizeof(s), sizeof(d));	
	return 0;
	
	
} 
