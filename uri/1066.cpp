#include <stdio.h>

int main()
{
	int i, a, n = 0, j = 0, k = 0, l = 0;
	for(i = 0; i < 5; i++) {
		scanf("%d", &a);
		if( a % 2 == 0) {
			n++;
		}
		if(a % 2 != 0) {
			j++;
		}
		if(a > 0) {
			k++;
		}
		if(a < 0) {
			l++;
		}
	}
	printf("%d valor(es) par(es)\n", n);
	printf("%d valor(es) impar(es)\n", j);
	printf("%d valor(es) positivo(s)\n", k);
	printf("%d valor(es) negativo(s)\n", l);
	
	return 0;
}
