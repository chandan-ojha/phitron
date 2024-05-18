#include <stdio.h>
long long int summation(int arr[], int i, int n)
{
    if (i == n)
    {
        return 0;
    }

    long long int result = arr[i] + summation(arr, i + 1, n);
    return result;
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

    long long int result = summation(arr, 0, n);
    printf("%lld", result);
    return 0;
}