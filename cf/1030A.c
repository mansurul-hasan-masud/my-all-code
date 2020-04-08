#include <stdio.h>

int main()
{
    int i, n, m[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &m[i]);

    }
    printf("%d\n", m);

    if(m == 1) {
        printf("EASY");
    }

    else {
        printf("HARD");
    }


    return 0;

}
