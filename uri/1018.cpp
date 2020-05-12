#include <stdio.h>

int main()
{
	int n, ans1, ans2, ans3, ans4, ans5, ans6, ans7;
	
	scanf("%d", &n);
	
	ans1 = n / 100;
	int a = n - (ans1 * 100);
		
	ans2 = a / 50;
	int b = a - (ans2 * 50);
	
			
	ans3 = b / 20;
	int c = b - (ans3 * 20);
		
	ans4 = c / 10;
	int d = c - (ans4 * 10);
	
	ans5 = d / 5;
	int e = d - (ans5 * 5);
	
	ans6 = e / 2;
	int f = e - (ans6 * 2);
	
	ans7 = f / 1;
	
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, ans1, ans2, ans3, ans4, ans5, ans6, ans7);
	
	return 0;
}
