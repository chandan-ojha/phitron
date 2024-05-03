#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int c = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
        s--;
        c++;
    }

    return 0;
}