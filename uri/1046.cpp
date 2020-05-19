#include <stdio.h>

int main()
{
	int a, b, d;
	scanf("%d %d", &a, &b);
	if(a > b) {
		int c = 24 - a;
		d = c + b;
		printf("O JOGO DUROU %d HORA(S)\n", d);
	}
	
	else if(a < b) {
		d = b - a;
		printf("O JOGO DUROU %d HORA(S)\n", d);
	}
	
	else {
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	return 0;
}
