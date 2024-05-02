#include <stdio.h>

int count_odd(int *arr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int odd_count = count_odd(arr, n);

    printf("%d", odd_count);

    return 0;
}