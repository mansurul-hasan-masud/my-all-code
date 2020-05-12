#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	
	int a = n / 3600;
	int b = a * 3600;
	int c = n - b;
		
	int d = c / 60;
	int e = d * 60;
		
	int f = c - e;
		
	printf("%d:%d:%d\n", a, d, f);
	
	return 0;
	
}
