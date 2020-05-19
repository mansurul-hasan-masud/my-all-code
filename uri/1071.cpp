#include <stdio.h>

int main()
{
	int a, b, i, sum = 0;
	scanf("%d %d",&a, &b);
	if(b % 2 == 0) {
		b = b + 1;
		for(i = b; i < a; i+=2) {
			sum = sum + i;
		}
		printf("%d\n", sum);
	}
	else {
		for(i = b+2; i < a; i+=2) {
			sum = sum + i;
		}
		printf("%d\n", sum);
	}
	
	return 0;
	
}
