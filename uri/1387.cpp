#include <stdio.h>

int main()
{
	int l, r, sum = 0;
	while(1) {
		scanf("%d %d", &l, &r);
		if (l == 0 && r == 0){
			break;
		}
		
		else {
			sum = l + r;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
