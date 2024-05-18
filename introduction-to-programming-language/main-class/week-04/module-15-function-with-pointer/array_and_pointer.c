#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // printf("Memory address of arr 0th index - %p\n", &arr[0]);
    // printf("Memory address of arr 0th index - %p\n", arr);

    // printf("Value of arr 0th index - %d\n", arr[0]);
    // printf("Value of arr 0th index - %d\n", *arr);

    // printf("Value of arr 1st index - %d\n", arr[1]);
    // printf("Value of arr 1st index - %d\n", *(arr + 1));

    printf("%d\n", *(arr + 1));
    printf("%d\n", *(1 + arr));

    printf("%d\n", arr[1]);
    printf("%d\n", 1 [arr]);

    return 0;
}