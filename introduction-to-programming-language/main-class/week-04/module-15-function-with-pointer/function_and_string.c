#include <stdio.h>
#include <string.h>

void fun(char arr[])
{
    // int sz = sizeof(arr) / sizeof(char);
    // printf("%d", sz);

    printf("%d\n", strlen(arr));

    // char n[] = "World";
    // return n;
}

int main()
{
    char arr[20] = "Hello";

    // int sz = sizeof(arr) / sizeof(char);
    // printf("%d", sz);

    fun(arr);

    return 0;
}