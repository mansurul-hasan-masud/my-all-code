#include <stdio.h>

int main()
{
	double A, B, C, ans;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	ans = ((A*2)+(B*3)+(C*5)) / 10;
	
	printf("MEDIA = %0.1lf\n", ans);
	
	return 0;
}
