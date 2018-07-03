

/*��дһ��������

	int MyItoa(char *s)
	�书���ǽ� s �����ַ�����ʽ��ŵķǸ�������ת������Ӧ�������ء����磬��� s
	�д���ַ��� ��1234������ú����ķ���ֵ���� 1234������ s �е��ַ�ȫ�����֣��Ҳ����� s �ǿմ��� s ̫�������
*/
#include<stdio.h>
#include<string.h>
int MyItoa(char *s)
{
	int num = 0,i;
	for(i = 0; i < sizeof(s) - 1; i++)
	{
		if((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			num *= 10;
			num += (*(s + i) - 48);
		}
		else if(*(s + i) == '\0')
		{
			printf("����\n");
			return num;
		}
		else
		{
			printf("Error\n");
			return -1;
		}
	}
	return num;
}

int main()
{
	char num[] = "12034";
	int n = MyItoa(num);
	printf("%d\n",n);
	return 0;
}
