#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE_1 5
#define SIZE_2 5
#define SIZE_3 5
#define SIZE_4 5
#define SIZE_5 5

int main()
{
    int i1, i2, i3, i4, i5;
    int array[SIZE_1][SIZE_2][SIZE_3][SIZE_4][SIZE_5];
    
    int min;
    /*ʹ������������鸳ֵ*/
    srand((unsigned)time(NULL));
    /*�Ե�ǰʱ����Ϊ����������ӣ���֤����������ɵ��������*/
    for(i1 = 0; i1 < SIZE_1; i1++)
        for(i2 = 0; i2 < SIZE_1; i2++)
            for(i3 = 0; i3 < SIZE_1; i3++)
                for(i4 = 0; i4 < SIZE_1; i4++)
                    for(i5 = 0; i5 < SIZE_1; i5++)
                        array[i1][i2][i3][i4][i5] = rand();
                        

    min = array[0][0][0][0][0];
    /*������Ԫ���в�����Сֵ*/
    for(i1 = 0; i1 < SIZE_1; i1++)
        for(i2 = 0; i2 < SIZE_1; i2++)
            for(i3 = 0; i3 < SIZE_1; i3++)
                for(i4 = 0; i4 < SIZE_1; i4++)
                    for(i5 = 0; i5 < SIZE_1; i5++)
                        if (min > array[i1][i2][i3][i4][i5]) 
                            min = array[i1][i2][i3][i4][i5];
    
    printf("The min of this set is %d\n", min);
    return 0;

}   