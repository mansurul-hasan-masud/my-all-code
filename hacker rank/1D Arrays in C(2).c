#include <stdio.h>

int main()
{
    int i, T, n, sum = 0;
    scanf("%d", &T);
    for(i = 0; i < T; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }

    printf("%d\n", sum);

    return 0;
}
