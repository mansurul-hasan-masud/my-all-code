#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int a = 0;
	int b = 1;
	t = t - 2;
	printf("%d %d", a, b);
	for(int i = 0; i < t; i++){
		int c = b;
		b = a+b;
		a = c;
		printf(" %d", b);
	}
	printf("\n");
	
	return 0;
}
