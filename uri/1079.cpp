#include <stdio.h>

int main()
{
	int n;
	double a, b, c, ans;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%lf %lf %lf", &a, &b, &c);
		ans = ((a*2) + (b*3) + (c*5))/10;
		printf("%0.1lf\n", ans);
	}
	
	return 0;
}
