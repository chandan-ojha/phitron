#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int x;
        scanf("%d", &x);

        int isAppeared = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                isAppeared = 1;
                break;
            }
        }

        if (isAppeared)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
