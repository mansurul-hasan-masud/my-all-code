#include <stdio.h>

int main()
{
	int a, b, d, e;
	double c, f, ans;
	
	scanf("%d %d %lf %d %d %lf", &a, &b, &c, &d, &e, &f);
	
	ans = (b * c) + (e * f);
	
	printf("VALOR A PAGAR: R$ %0.2lf\n", ans);
	
	return 0;
}
