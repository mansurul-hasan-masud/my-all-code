#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a == 1) {
		double ans = 4 * b;
		printf("Total: R$ %0.2lf\n",ans);
	}
	
	else if(a == 2) {
		double ans2 = 4.50 * b;
		printf("Total: R$ %0.2lf\n",ans2);
	}
	
	else if(a == 3) {
		double ans3 = 5 * b;
		printf("Total: R$ %0.2lf\n",ans3);
	}
	
	else if(a == 4) {
		double ans4 = 2 * b;
		printf("Total: R$ %0.2lf\n",ans4);
	}
	
	else if(a == 5) {
		double ans5 = 1.50 * b;
		printf("Total: R$ %0.2lf\n",ans5);
	}
	
	return 0;
}
