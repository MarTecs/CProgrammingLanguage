
#include <stdio.h>
#define SIZE 10

/*�������飬����target*/
int main()
{
    int i;
    int target;
    int array[SIZE] = {3, 78, 41, 2, 40, 5, 33, 8, 7, 24};

    for(i = 0; i < SIZE; ++i)
        printf("%-4d", array[i]);
    printf("\n������Ҫ���ҵ����֣�");
    scanf("%d", &target);

    for(i = 0; i < SIZE; i++)
    {
        /* code */
        if(array[i] == target)
            break;
    }

    if(SIZE == i)
        printf("��������û���ҵ�����??!\n");
    else
        printf("%d�������еĵ�%d��Ԫ��\n", target, i+1);
    return 0;
}