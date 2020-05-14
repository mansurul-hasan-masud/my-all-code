#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++) {
		scanf("%d", &n);
		
		if(n == 0) {
			printf("NULL\n");
		}
		
		else if((n < 0) && (n % 2 != 0)) {
			printf("ODD NEGATIVE\n");
		}
		
		else if((n < 0) && (n % 2 == 0)) {
			printf("EVEN NEGATIVE\n");
		}
		
		else if((n > 0) && (n % 2 != 0)){
			printf("ODD POSITIVE\n");
		}
		
		else if((n > 0) && (n % 2 == 0)){
			printf("EVEN POSITIVE\n");
		}
	}
	
	return 0;
}
