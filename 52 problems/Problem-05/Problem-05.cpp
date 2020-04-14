#include<stdio.h>
int main()
{
    int T, N, i, col, row;
    scanf("%d", &T);
    for(i= 1; i <= T; i++)
    {
        scanf("%d", &N);
        for(row = 1; row <= N; row++)
        {
            for(col = 1; col <= N; col++)
            {
                printf("*", col);
            }
            printf("\n");
        }

    }
}
