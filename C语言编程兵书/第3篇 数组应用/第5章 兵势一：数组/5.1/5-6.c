
#include <stdio.h>
#define SIZE 10

/*遍历数组，查找target*/
int main()
{
    int i;
    int target;
    int array[SIZE] = {3, 78, 41, 2, 40, 5, 33, 8, 7, 24};

    for(i = 0; i < SIZE; ++i)
        printf("%-4d", array[i]);
    printf("\n请输入要查找的数字：");
    scanf("%d", &target);

    for(i = 0; i < SIZE; i++)
    {
        /* code */
        if(array[i] == target)
            break;
    }

    if(SIZE == i)
        printf("在序列中没有找到该数??!\n");
    else
        printf("%d是序列中的第%d个元素\n", target, i+1);
    return 0;
}