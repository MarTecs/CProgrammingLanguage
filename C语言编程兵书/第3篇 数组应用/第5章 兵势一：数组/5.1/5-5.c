
#include <stdio.h>
#define SIZE 3
//�ȶ���ı������ڴ�ĸ�λ��ʼ���䣬
//�ڴ��ɸߵ���
//����iȻ����left, data[2], data[1], data[0], right
int main(void){
    int i = 0;
    int left = 12;
    int data[SIZE] = {1, 2, 3};
    int right = 17;
    for (i = -1; i <= SIZE; ++i)
        printf("&data[%2d] = %x\n", i, &data[i]);
    printf("\n&i = %p\n", &i);
    printf("\n&left = %p\n&right = %p\n\n", &left, &right);
    printf("data[-1] = %-8d, data[3] = %-8d\n", data[-1], data[3]);
    printf("left = %-8d, right = %-8d\n\n", left, right);
    data[-1] = 2;
    data[3] = 4;
    printf("data[-1] = %-8d, data[3] = %-8d\n", data[-1], data[3]);
    printf("left = %-8d, right = %-8d\n\n", left, right);
    return 0;
}
