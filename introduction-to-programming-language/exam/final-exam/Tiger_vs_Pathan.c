#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);

        int tiger_wins = 0;
        int pathaan_wins = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'T')
            {
                tiger_wins++;
            }
            else
            {
                pathaan_wins++;
            }
        }

        if (tiger_wins > pathaan_wins)
        {
            printf("Tiger\n");
        }
        else if (tiger_wins < pathaan_wins)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}