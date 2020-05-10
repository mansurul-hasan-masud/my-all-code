#include <stdio.h>

int main()
{
	double a, b, c, ans1, ans2, ans3, ans4, ans5;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	ans1 = .5 * a * c;
	ans2 = 3.14159 * c * c;
	ans3 = 0.5* (a + b) * c; 
	ans4 = b * b;
	ans5 = a * b;
	
	printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", ans1, ans2, ans3, ans4, ans5);
	
	return 0;
}
