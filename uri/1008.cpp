#include <stdio.h>

int main()
{
	int a; 
	double b, c, ans;
	
	scanf("%d %lf %lf", &a, &b, &c);
	
	ans = b * c;
	
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %0.2lf\n",ans);
	
	return 0;
}
