#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch, ar[100], arr[100];
    scanf("%c", &ch);
    scanf("%s", ar);
    scanf("\n");
    scanf("%[^\n]%*c", arr);
    printf("%c\n%s\n%s", ch, ar, arr);
    return 0;
}
