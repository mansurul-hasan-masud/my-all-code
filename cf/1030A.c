#include <stdio.h>

int main()
{
    int elements, input;
    scanf("%d", &elements);

    while (1)
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
