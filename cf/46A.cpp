#include <stdio.h>

int main()
{
	int n, m = 1;
	scanf("%d", &n);
	for(int i = 1; i < n; i++) {
		m = m + i;
		if(m > n )
			m = m - n;
		printf("%d\n", m);
	}
}
