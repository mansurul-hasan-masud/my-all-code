#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d %d", &m, &n);
		if(n==1||m==1||(n==2&&m==2))
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}
