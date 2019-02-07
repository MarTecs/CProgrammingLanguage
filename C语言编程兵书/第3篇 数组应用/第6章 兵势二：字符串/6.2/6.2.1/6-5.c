#include <stdio.h>
#include <string.h>
int main()
{
    printf("size of (\"Hello!World!\")\t= %d\n", sizeof("Hello!World!"));
    printf("size of (\"Hello!\\0World!\")\t= %d\n", sizeof("Hello!\0World!"));
    printf("Hello!World!\t\t= [");
    printf("Hello!World!");
    printf("]\n");
    printf("Hello!\\0World!\t= [");
    printf("Hello!\0World!");
    printf("]\n");
    getchar();


    return 0;

}
