#include <stdio.h>

int main()
{
	int m, n, i, sum;
	
	while(scanf("%d %d", &m, &n)) {
		if(m <= 0 || n <= 0)
		break;
		
		sum = 0;
		
		if(m < n) {
			for(i = m; i <= n; i++) {
				printf("%d ", i);
				sum = sum + i;
			}
		}
		else {
			for(i = n; i <= m; i++) {
				printf("%d ", i);
				sum = sum + i;
			}
		}
		printf("Sum=%d\n", sum);

	}
	
	return 0;
	
}
