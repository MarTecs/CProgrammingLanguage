#include <stdio.h>
#define SIZE 5
int main()
{
    int array1[SIZE] = {1, 2, 3, 4, 5};
    int array2[SIZE] = {0};
    int array3[SIZE] = {11, 22, 33, 44, 55};
    //输出array1的值
    for(int i = 0; i < SIZE; i++)
        printf("array1[%d] = %2d  ", i, array1[i]);
    printf("\n");
    //输出array2的值
    for(int i = 0; i < SIZE; i++)
        printf("array2[%d] = %2d  ", i, array2[i]);
    printf("\n");
    //输出array3的值
    for(int i = 0; i < SIZE; i++)
        printf("array3[%d] = %2d  ", i, array3[i]);
}