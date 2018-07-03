#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int *));	//因为CPU在64位机寻址范围为2^64,一个地址就是64bit也就是8字节 
	return 0;
}
