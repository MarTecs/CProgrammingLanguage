
#include <stdio.h>
#define SIZE 5
/**
 * ��������֤���������ֵ��Ϊ������׵�ַ���Լ�������Ԫ�صĵ�ַ�Ǳ����������
 * %p��ʾ����ʮ������������ݣ����������ݲ���8λ������߲���
 */
int main()
{
    int array1[SIZE] = {1,2,3,4,5};
    char array2[SIZE] = {'A', 'B', 'C', 'D', 'E'};
    printf("array1 = %p\n", array1);
    for(int i = 0; i < SIZE; i++)
        printf("&array1[%d] = %p\n", i, &array1[i]);
    printf("array2 = %p\n", array2);
    for(int j = 0; j < SIZE; j++)
        printf("&array2[%d] = %p\n", j, &array2[j]);
    return 0;
}