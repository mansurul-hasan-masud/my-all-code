#include<stdio.h>
int main()
{
    int T, n1, n2, n3, temp, kase;
    scanf("%d", &T);
    for(kase = 1; kase <= T; kase++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1 > n2 > n3)
        {
            printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
        }
        else if(n1 > n2 < n3)
        {
            printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
        }
        else if(n1 < n2 > n3)
        {
            printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
        }
        else if(n1 < n2 < n3)
        printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
    }
    return 0;
}
