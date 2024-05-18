#include <stdio.h>
void fun(int *ptr)
{
    // printf("Value of ptr = %p\n", ptr);
    // printf("Value of main x = %d\n", *ptr);
    *ptr = 500;
}

int main()
{
    int x = 100;
    // printf("Memory address of  x = %p\n", &x);
    fun(&x);
    printf("%d", x);

    return 0;
}