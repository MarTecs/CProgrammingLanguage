#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE];        
    for(int i = 0; i < SIZE; i++)
        array[i] = i + 1;
    //输出之前赋值的数组array
    for(int j = 0; j < SIZE; j++)
        printf("array[%d] = %d\n", j, array[j]);
    getchar();
    return 0;
}