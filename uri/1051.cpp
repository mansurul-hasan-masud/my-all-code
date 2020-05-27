#include <stdio.h>

int main()
{
	float a, x, y, z, ans;
	scanf("%f", &a);
	if(a <= 2000.00) {
		printf("Isento\n");
	}
	
	else if( a > 2000.00 && a < 3000.01) {
		x = a - 2000.00;
		ans = (8*x)/100;
		printf("R$ %0.2f\n", ans);
	}
	
	else if(a>3000.00 && a<4500.01) {
		y = 80;
		x = a - 3000.00;
		ans = ((18*x)/100)+y;
		printf("R$ %0.2f\n", ans);
	}
	
	else {
		y = 80;
		z = 270;
		x = a - 4500.00;
		ans = ((28*x)/100)+y+z;
		printf("R$ %0.2f\n", ans);
	}
	
	return 0;
}
