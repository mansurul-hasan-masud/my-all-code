#include <stdio.h>

int main()
{
	int n, a, a2, a3, i;
	scanf("%d", &n);
	for(i = 1; i <=n; i++) {
		a = i;
		a2 = i * i;
		a3 = i * i * i;
		printf("%d %d %d\n", a, a2, a3);
	}
	
	return 0;
}
