#include <stdio.h>

int main()
{
    double n, t, sum = 0, result;
    scanf("%lf", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf", &t);

        sum = sum + t;
    }
    result = sum / n;
    printf("%0.12lf", result);
}
