#include <stdio.h>

int main()
{
    int i, j, n[1000], sum = 0;
    scanf("%d", &j);
    for(i = 0; i < j; i++)
    {
        scanf("%d", &n[i]);
        sum = sum + n[i];
    }

    printf("%d\n", sum);

    return 0;
}
