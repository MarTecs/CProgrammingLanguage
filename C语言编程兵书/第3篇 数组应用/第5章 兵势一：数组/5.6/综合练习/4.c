#include <stdio.h>
void main()
{
    int array1[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int array2[4][6] = {
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {11,12,13,14,15,16},
        {17,18,19,20,21,22}
    };
    int array[3][6] = {0};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            array[i][j] += array1[i][j] * array2[i][0];
        }
    }

}