#include <stdio.h>

void fun(double arr[], int n)
{
    // int sz = sizeof(arr) / sizeof(int);
    // printf("%d\n", sz);

    for (int i = 0; i < n; i++)
    {
        printf("%0.2llf ", arr[i]);
    }
}

int main()
{
    double arr[5] = {10.5, 20.2, 30.1, 40.6, 50.0};

    // int sz = sizeof(arr) / sizeof(int);
    // printf("%d\n", sz);

    fun(arr, 5);

    return 0;
}