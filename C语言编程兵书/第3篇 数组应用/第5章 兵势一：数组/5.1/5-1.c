#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE];        
    for(int i = 0; i < SIZE; i++)
        array[i] = i + 1;
    //���֮ǰ��ֵ������array
    for(int j = 0; j < SIZE; j++)
        printf("array[%d] = %d\n", j, array[j]);
    return 0;
}