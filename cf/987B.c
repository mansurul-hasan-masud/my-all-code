#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z, a;
    scanf("%lf %lf", &x, &y);
    z = log(x);
    a = log(y);
    if(x*a > y * z) {
        printf("<");
    }

    else if(x*a < y * z){
        printf(">");
    }
    else if(x*a == y * z) {
        printf("=");
    }


    return 0;

}
