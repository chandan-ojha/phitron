#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = INT_MAX, pos;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < min)
        {
            min = arr[i];
            pos = i + 1;
        }
    }

    printf("%d %d", min, pos);

    return 0;
}