#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a != b) {
        if((b != c) && (a != c)) {
            if((c != d) && (b != d) && (a != d))
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        else
        {
            if((c != d) && (b !=c )&& (b != d))
            {
                printf("1");
            }
            else
            {
                printf("2");
            }
        }
    }
    else
    {
        if(b != c)
        {
            if(c != d)
            {
                printf("1");
            }
            else
            {
                printf("2");
            }
        }
        else
        {
            if(( c!= d) && (b != d))
            {
                printf("2");
            }
            else
            {
                printf("3");
            }
        }
    }

}
