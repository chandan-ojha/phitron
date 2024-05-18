#include <stdio.h>

void fun(char *arr)
{
    arr[0] = 'G';
}

int main()
{
    char arr[] = "Hello";

    fun(arr);

    printf("%s", arr);

    return 0;
}
