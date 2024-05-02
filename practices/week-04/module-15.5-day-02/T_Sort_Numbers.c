#include <stdio.h>
int main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);

    return 0;
}