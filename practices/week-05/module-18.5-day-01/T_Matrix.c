#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int pri_dia_sum = 0;
    int sec_dia_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri_dia_sum += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sec_dia_sum += arr[i][j];
            }
        }
    }

    int ans = pri_dia_sum - sec_dia_sum;

    printf("%d", abs(ans));

    return 0;
}