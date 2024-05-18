#include <stdio.h>

void doors_unlock()
{
    int key;
    scanf("%d", &key);
    int arr[4];

    for (int i = 1; i <= 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[key] == 0)
    {
        printf("NO\n");
        return;
    }

    key = arr[key];

    if (arr[key] == 0)
    {
        printf("NO\n");
        return;
    }

    printf("YES\n");
}

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        doors_unlock();
    }

    return 0;
}