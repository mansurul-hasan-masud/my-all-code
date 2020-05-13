#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double x =((b*b)-(4*a*c));
	
	if(x < 0) {
		printf("Impossivel calcular\n");
	}
	
	else {
		if((2 * a) == 0) {
			printf("Impossivel calcular\n");
		}
		else {
			double z = sqrt(x);
			double ans1 = (-b+z) / (2 * a);
			double ans2 = (-b-z) / (2 * a);
			printf("R1 = %0.5lf\nR2 = %0.5lf\n", ans1, ans2);
		}
	}
	

	
	return 0;
}
