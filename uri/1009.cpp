#include <stdio.h>

int main()
{
	char name[20];
	double a, b, ans;
	
	scanf("%s", name);
	scanf("%lf %lf", &a, &b);
	
	ans = a + (b*0.15);
	
	printf("TOTAL = R$ %0.2lf\n", ans);
	
	return 0;
}
