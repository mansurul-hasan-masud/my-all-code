#include <stdio.h>

int main()
{
	int t, a, b, i, j, sum;
	scanf("%d", &t);
	for(i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		
		if(a == b)
		printf("0\n");
		else if(a < b) {
			if(a%2 == 0) {
				sum = 0;
				for(j = a + 1; j < b; j += 2) {
					sum = sum + j;	
				}
				printf("%d\n", sum);
			}
			else {
				sum = 0;
				for(j = a+2; j < b; j += 2) {
					sum = sum + j;
				}
				printf("%d\n", sum);
			} 
		}
		else {
			if(b % 2 == 0) {
				sum = 0;
				for(j = b + 1; j < a; j += 2) {
					sum = sum + j;	
				}
				printf("%d\n", sum);
			}
			else {
				sum = 0;
				for(j = b+2; j < a; j += 2) {
					sum = sum + j;
				}
				printf("%d\n", sum);
			} 
		}
	}
	
	return 0;
}

