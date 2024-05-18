#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int countDivBy2 = 0;
    int countDivBy3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            countDivBy2++;
        }
        else if (a[i] % 3 == 0)
        {
            countDivBy3++;
        }
    }

    printf("%d %d\n", countDivBy2, countDivBy3);

    return 0;
}
