#include <stdio.h>

int main()
{
    int n, i, t, count;
    scanf("%d", &n);

    for( i = 0; i < n; i++) {
        scanf("%d", &t);

        count = (t - 1) / 2;

        printf("%d\n", count);
    }


}
