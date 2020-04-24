#include <stdio.h>

int main()
{
    long long int n, m;

    scanf("%lld", &n);

    if(n % 2 == 0) {
        m = (n / 2);

        printf("%lld", m);
    }

    else {
        m = -(n + 1) / 2;
        printf("%lld", m);
    }

    return 0;
}
