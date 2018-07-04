
#include<stdio.h>
int main()
{


    //1.判断两个浮点数相同,不要用a == b 而用 fabs(a - b) < 某个阀值(例如1e-9)
    float a = 0.000000000000001, b = 0.00000000000000000001;
    if(a == b)
        printf("Equal\n");
    else
        printf("%f\n",a-b);

    //2.判断一个数是否为奇数,不用 x % 2 == 1而用 x % 2 != 0,如果是一个负数,模2将会得到-1
    int x = -3 % 2;
    printf("%d\n",x);

    //3.用char的值作为数组下标,要考虑到char可能为负数,如果强转为unsigned int再用作下标,仍然是错误的,正确的是强转为unsigned char然后再用作下标,这涉及C++整型的提升规则
    return 0;
}
