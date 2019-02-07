#include <stdio.h>
int main()
{
    int i, j, min, temp, a[11];
    printf("请随40便输入10个数字：\n");
    for(i = 1; i <= 10; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    //输出之前a[11]中输入的10个数字
    for(i = 1; i <= 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    //从小到大排序
    for(i = 1; i <= 9; i++)
    {
        min = i;
        for(j = i + 1; j <= 10; j++)
            if(a[min] > a[j])
                min = j;                
        //替换数组最小数字为正确位置
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    //输出排序后数组的各个元素
    printf("\b从小到大排序后的数字序列为：\n");
    for(i = 1; i <= 10; i++)
        printf("%5d", a[i]);
    return 0;
}