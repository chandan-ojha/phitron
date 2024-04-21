#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int m;
    scanf("%d", &m);
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int carr[n + m];

    for (int i = 0; i < n; i++)
    {
        carr[i] = arr1[i];
    }

    int i = n;

    for (int j = 0; j < m; j++)
    {
        carr[i] = arr2[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", carr[i]);
    }

    return 0;
}