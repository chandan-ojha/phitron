#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int min = INT_MAX, max = INT_MIN;
    int min_i, max_i;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }
    }

    int temp = arr[min_i];
    arr[min_i] = arr[max_i];
    arr[max_i] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}