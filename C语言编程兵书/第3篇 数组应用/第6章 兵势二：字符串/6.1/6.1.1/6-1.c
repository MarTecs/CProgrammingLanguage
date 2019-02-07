#include <stdio.h>
#define ARRAY_LENGTH 10
int main()
{
    char array_ch[ARRAY_LENGTH];
    int array_int[ARRAY_LENGTH];
    int i = 0;
    for(i = 0; i < ARRAY_LENGTH; ++i)
    {
        array_ch[i] = 'A' + i;
        array_int[i] = 'a' + i;
    }

    for(i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("array_int[%d] = [%c]\t", i, array_int[i]);
        if(i % 3 == 2)
            printf("\n");
    }
    printf("\nsize of(array_ch) = %d\n", sizeof(array_ch));
    printf("size of(array_int) = %d\n", sizeof(array_int));
    getchar();
    return 0;
}
