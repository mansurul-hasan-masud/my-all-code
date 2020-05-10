#include <stdio.h>

int max_number(int a, int b, int c)
{
	return ((a>b?a:b)>c?(a>b?a:b):c);
}

int main()
{
	int a, b, c, ans;
	
	scanf("%d %d %d", &a, &b, &c);
	
	ans = max_number(a, b, c);
	printf("%d eh o maior\n", ans);
	
	return 0;
}
