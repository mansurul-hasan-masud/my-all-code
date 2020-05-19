#include <stdio.h>

int main()
{
	int n, m, i, count1 = 0, count2 = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &m);
		if(m >= 10 && m <= 20){
			count1++;		
		}
		else {
			count2++;		
		}
	}
	printf("%d in\n", count1);
	printf("%d out\n", count2);
	
	return 0;
}
