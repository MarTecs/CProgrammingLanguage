#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE];            
    for(int i = 0; i < SIZE; i++)
        /* code */
        printf("array[%d] = %d\n", i+1, array[i]);
    return 0;
}