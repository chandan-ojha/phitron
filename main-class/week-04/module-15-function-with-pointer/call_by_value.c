#include <stdio.h>
void fun(int x)
{
    printf("Memory address of fun x = %p\n", &x);
    x = 200;
}

int main()
{
    int x = 100;
    printf("Memory address of main x = %p\n", &x);
    fun(x);
    printf("Value of main x = %d\n", x);
    return 0;
}