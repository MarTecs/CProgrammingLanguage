#include <stdio.h>
#define ROW_SIZE 5                  /*行数*/
#define COLUMN_SIZE 4               /*列数*/

int main(void)
{
    int i = 0, j = 0;
    int array[ROW_SIZE][COLUMN_SIZE];

    for(i = 0; i < ROW_SIZE; ++i)
        for(j = 0; j < COLUMN_SIZE; ++j)
            array[i][j] = i * 10 + j;
    
    for(i = 0; i < ROW_SIZE; ++i){
        for(j = 0; j < COLUMN_SIZE; ++j)
            printf("a[%d][%d] = %2d,\t", i, j, array[i][j]);
        printf("\n");
    }
    return 0;  
}