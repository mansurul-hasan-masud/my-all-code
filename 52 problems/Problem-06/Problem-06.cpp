#include<stdio.h>
int main()
{
    int n, Sum, i, j, k, T;
    scanf("%d", &T);
    for(k = 1; k <= T; k ++)
    {

        scanf("%d", &n);
        j = n % 10;
        while(n >= 10)
        {
            n = n / 10;
        }
        i = n;
        Sum = i + j;
        printf("Sum  = %d\n", Sum);
    }
}
