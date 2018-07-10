#include <stdio.h>

void printBySort(int *num, int length)
{
    int i,j,temp;
    for(i = 0; i < length - 1; i++)
    {
        for(j = i + 1; j < length; j++)
        {
            if(*(num + i) > *(num + j))
            {
                temp = *(num + i);
                *(num + i) = *(num + j);
                *(num + j) = temp;
            }
        }
    }


    for(i = 0; i < length; i++)
    {
        printf("%d ", *(num + i));
    }
    printf("\n");
}

int main()
{
    int n,m,i,j,length; //length为公共数字的长度
    int a[100], b[100], c[100];
    while(scanf("%d %d", &n,&m) != EOF)
    {
        if((n == 0) && (m == 0))
            break;

        //给A集合赋值
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }

        //给B集合赋值
        for(i = 0; i < m; i++)
        {
            scanf("%d",&b[i]);
        }

        length = 0;

        //求公共集合c,
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(a[i] == b[j])
                {
                    c[length] = a[i];
                    length++;
                    break;
                }
            }
        }


        //求差集d, flag判断d[i]是否在重复元素集合中，length1则是差集的长度
        int d[n - length],flag,length1 = 0;
        for(i = 0; i < n; i++)
        {
            flag = 0;
            for(j = 0; j < length; j++)
            {
                if(a[i] == c[j])
                {
                    flag++;
                }
            }
            if(flag == 0)
            {
                d[length1] = a[i];
                length1++;
            }
        }

        //如果为空集合就退出
        if(length1 == 0)
        {
            printf("NULL\n");
        }
        //排序输出
        printBySort(d,length1);
    }
    return 0;
}
