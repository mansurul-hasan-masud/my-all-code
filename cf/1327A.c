#include <stdio.h>
  
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    long long int n,k;
    scanf("%lld %lld", &n, &k);
		if((k * k) > n){
			printf("NO\n");
			}
		else if(((n % 2 == 1) && (k % 2 == 0)) || ((n % 2 == 0) && (k % 2 == 1))) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
 
    }
    return 0;
}
