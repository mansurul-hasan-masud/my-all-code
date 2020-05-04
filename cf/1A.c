#include <stdio.h>

int main()
{
    long long int n, m, a, b, c, ans;
    scanf("%lld %lld %lld", &n, &m, &a);
    b =((n + a - 1) / a);
    c = ((m + a - 1) / a);
    ans = (b * c);
    printf("%lld\n", ans);

    return 0;
}
