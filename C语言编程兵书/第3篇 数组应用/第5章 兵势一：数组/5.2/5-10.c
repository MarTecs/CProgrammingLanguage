#include <stdio.h>
#define SIZE 4  /*��������*/

int main(void)
{
    int array[SIZE][SIZE] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}
    };
    int tmp = 0;
    int i = 0;
    int j = 0;

    /*��ӡ��ά����*/
    printf("Primary array:\n");
    for(i = 0; i < SIZE; ++i)
    {
        for(j = 0; j < SIZE; ++j)
            printf("\t-4d", array[i][j]);
        printf("\n");
    }

    /*ʵ������ת��*/
    for(i = 0; i < SIZE; ++i)
        for(j =  i + 1; j < count; i++)
        {
            /* code */
        }
        
        
        
}