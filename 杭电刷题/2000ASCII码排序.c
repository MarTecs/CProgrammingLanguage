#include <stdio.h>
int main()
{/*
ch1>ch2 ch1>ch3 ch2>ch3             max     mid     min
>           >       >                 ch1   ch2     ch3
>           >       <                  ch1  ch3     ch2
>           <       >                   ²»³ÉÁ¢
>           <       <                  ch3  ch1     ch2
<           >       >                   ch2 ch1        ch3
<           >       <                   ch2     ch1     ch3
<           <       >                   ch2     ch3           ch1
<           <       <                  ch3      ch2     ch1*/

    char ch1, ch2, ch3, min, mid, max, tmp;
    int num;
    while(scanf("%c%c%c", &ch1,&ch2,&ch3) != EOF)
    {
        if((ch1 >= ch2) && (ch1 >= ch3) && (ch2 >= ch3))
        {
            max = ch1;
            min = ch3;
            mid = ch2;
            printf("H1");

        }else if((ch1 >= ch2) && (ch1 >= ch3) && (ch2 <= ch3)){
            max = ch1;
            mid = ch3;
            min = ch2;
            printf("H2");
        }else if((ch1 >= ch2) && (ch1 <= ch3) && (ch2 <= ch3)){
            max = ch3;
            mid = ch1;
            min = ch2;
            printf("H3");
        }else if((ch1 <= ch2) && (ch1 >= ch3) && (ch2 >= ch3)){
            max = ch2;
            mid = ch1;
            min = ch3;
            printf("H4");
        }else if((ch1 <= ch2) && (ch1 <= ch3) && (ch2 >= ch3)){
            max = ch2;
            mid = ch3;
            min = ch1;
            printf("H5");
        }else{
            max = ch3;
            mid = ch2;
            min = ch1;
            printf("H6 %cd",ch3);
        }
        printf("%c %c %c\n", min, mid, max);

    }
    return 0;
}



