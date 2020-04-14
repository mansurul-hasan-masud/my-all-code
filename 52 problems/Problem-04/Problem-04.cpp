#include<stdio.h>
int main()
{
	int T, n, i, j;
	scanf("%d", &T);
	for(i = 1; i <= T; i++)
	{
		scanf("%d", &n);
		printf("case %d: ", i);
		for(j = 1; j <= n; j++)
        {
            if(n % j)
            {
                printf(" %d", j);
            }
		}
		printf("\n");
    }
    return 0;

}

