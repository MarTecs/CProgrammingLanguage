#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "I am a boy\0 from Beijing";
    char b[] = "perfect City";
    char c[8] = { 'W', 'e', 'l', 'c', 'o', 'm', 'e'};
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
    return 0;
}
