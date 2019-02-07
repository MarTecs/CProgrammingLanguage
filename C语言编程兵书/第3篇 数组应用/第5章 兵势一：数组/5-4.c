#include <stdio.h>
#define SIZE 5
/**
 * 本程序验证了数组变量值即为数组的首地址，以及数组中元素的地址是被连续分配的
 * %p表示按照十六进制输出数据，如果输出数据不够8位，则左边补零
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