#include <stdio.h>
int main()
{
    int i, j, min, temp, a[11];
    printf("����40������10�����֣�\n");
    for(i = 1; i <= 10; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    //���֮ǰa[11]�������10������
    for(i = 1; i <= 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    //��С��������
    for(i = 1; i <= 9; i++)
    {
        min = i;
        for(j = i + 1; j <= 10; j++)
            if(a[min] > a[j])
                min = j;                
        //�滻������С����Ϊ��ȷλ��
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    //������������ĸ���Ԫ��
    printf("\b��С������������������Ϊ��\n");
    for(i = 1; i <= 10; i++)
        printf("%5d", a[i]);
    return 0;
}