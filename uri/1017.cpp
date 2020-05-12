#include <stdio.h>

int main()
{
	int a, b;
	double div, ans;
	
	scanf("%d %d", &a, &b);
	
	div = b / 12.0;
	
	ans = div * a;
	
	printf("%0.3lf\n", ans);
	
	return 0;
}
