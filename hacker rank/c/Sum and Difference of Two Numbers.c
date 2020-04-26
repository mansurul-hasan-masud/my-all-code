#include <stdio.h>

int main()
{
    int a, b, sum1, sum2;
    float c, d, sum3, sum4;
    scanf("%d%d", &a,&b);
    scanf("%f%f", &c, &d);
    sum1 = a + b;
    sum2 = a - b;
    sum3 = c + d;
    sum4 = c - d;
    printf("%d %d\n", sum1, sum2);
    printf("%0.1f %0.1f\n", sum3, sum4);
    return 0;
}


