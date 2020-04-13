#include <stdio.h>

int main()
{
    int n, i, no;
    scanf("%d %d", &no, &n);
    for(i = 1; i <= n; i++) {
        if(no % 10 != 0) {
            no = no - 1;
        }
        else {
            no = no / 10;
        }
    }
    printf("%d", no);

    return 0;
}
