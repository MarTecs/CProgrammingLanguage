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
    /*使用随机数给数组赋值*/
    srand((unsigned)time(NULL));
    /*以当前时间作为随机数的种子，保证不会出现生成的随机数字*/
    for(i1 = 0; i1 < SIZE_1; i1++)
        for(i2 = 0; i2 < SIZE_1; i2++)
            for(i3 = 0; i3 < SIZE_1; i3++)
                for(i4 = 0; i4 < SIZE_1; i4++)
                    for(i5 = 0; i5 < SIZE_1; i5++)
                        array[i1][i2][i3][i4][i5] = rand();
                        

    min = array[0][0][0][0][0];
    /*在所有元素中查找最小值*/
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