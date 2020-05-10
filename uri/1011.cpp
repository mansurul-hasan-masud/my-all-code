#include <stdio.h>

int main()
{
	int R;
	
	double ans;
	
	scanf("%d", &R);
	
	ans = (4/3.0) * 3.14159 * R * R * R;
	
	printf("VOLUME = %0.3lf\n", ans);
	
	return 0;
}
