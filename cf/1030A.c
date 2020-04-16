#include <stdio.h>

int main()
{
    int elements, input;
    scanf("%d", &elements);

    while (elements--)
    {
        scanf("%d", &input);

        if(!(input ^ 1))
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");

    return 0;
}
