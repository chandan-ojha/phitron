#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int base_case, star, space;

    base_case = ((5 * 2 + n) / 2) + 1;
    star = 1;
    space = ((5 * 2 + n) / 2);

    for (int i = 1; i <= base_case; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}