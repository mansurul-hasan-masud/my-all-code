#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	
	for(i = 1; i <=10; i++) {
		int ans = i * n;
		printf("%d x %d = %d\n", i, n, ans);
	}
	
	return 0;
}