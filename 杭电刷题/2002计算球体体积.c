#include <stdio.h>
#define PI 3.1415927
int main()
{
    double radius = 0;
    while(scanf("%lf", &radius) != EOF)
    {
        printf("%.3lf\n", 4 * PI * radius * radius * radius / 3);
    }
    return 0;
}
