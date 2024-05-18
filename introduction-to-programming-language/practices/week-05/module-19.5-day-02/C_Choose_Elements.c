#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int max_sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (max_sum + arr[i] > max_sum)
        {
            max_sum = max_sum + arr[i];
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}
