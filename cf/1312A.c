#include <stdio.h>
int main()
{
    int t, m, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        if(n%m==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
