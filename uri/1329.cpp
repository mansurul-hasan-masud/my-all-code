#include <stdio.h>

int main()
{
	int n, m, count1 = 0, count2 = 0;
	while(1) {
		scanf("%d", &n);
		if(n == 0) break;
		for(int  i = 0; i < n; i++) {
			scanf("%d", &m);
			if(m == 0) {
				
				count1++;
			}
			else if(m==1) {
				count2++;
			}
		}
		printf("Mary won %d times and John won %d times\n", count1, count2);
		count1 = 0, count2 = 0;
	}
	
	return 0;
}
