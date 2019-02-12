#define N 3
int main(void)
{
    int a[N][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i, s1 = 0, s2 = 0;
    for(i = 0; i < N; i++)
    {
        s1 = a[i][i] + s1;
        s2 = a[i][2-i] + s2;
    }
    
    printf("s1 = %d, s2 = %d", s1, s2);
    return 0;
}