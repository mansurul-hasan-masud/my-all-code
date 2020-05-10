#include <stdio.h>
#include <math.h>

int main()
{
	double x1, x2, y1, y2, sq, ans;
	
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	
	sq = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	
	ans = sqrt(sq);
	
	printf("%0.4lf\n", ans);
	
	return 0;
}
