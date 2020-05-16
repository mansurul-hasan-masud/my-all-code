#include <stdio.h>

int main()
{
	int i, n = 0;
	float s = 0, a;
	for(i = 0; i < 6; i++) {
		scanf("%f", &a);
		if( a >= 0) {
			s = s + a;
			n++;
		}
	}
	printf("%d valores positivos\n", n);
	
		printf("%0.1lf\n", s/n);
	
	return 0;
}
