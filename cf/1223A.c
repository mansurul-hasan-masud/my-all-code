#include<stdio.h>

int main(){
	int q, n, i;
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		scanf("%d", &n);
		if(n>2){
			if(n%2==0)
                printf("0\n");
			else
                printf("1\n");
		} else {
			if(n==2)
                printf("2\n");
			else if(n==1)
                printf("3\n");
			else
                printf("4\n");
		}
	}
}
