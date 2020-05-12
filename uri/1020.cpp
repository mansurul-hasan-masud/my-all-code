#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int a = n / 365;
	int b = n - (a* 365);
	
	int c = b / 30;
	int d = b - (c * 30);
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, c, d);
	
	return 0;
}
