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
    int n,m,i,j,length; //lengthΪ�������ֵĳ���
    int a[100], b[100], c[100];
    while(scanf("%d %d", &n,&m) != EOF)
    {
        if((n == 0) && (m == 0))
            break;

        //��A���ϸ�ֵ
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }

        //��B���ϸ�ֵ
        for(i = 0; i < m; i++)
        {
            scanf("%d",&b[i]);
        }

        length = 0;

        //�󹫹�����c,
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


        //��d, flag�ж�d[i]�Ƿ����ظ�Ԫ�ؼ����У�length1���ǲ�ĳ���
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

        //���Ϊ�ռ��Ͼ��˳�
        if(length1 == 0)
        {
            printf("NULL\n");
        }
        //�������
        printBySort(d,length1);
    }
    return 0;
}
