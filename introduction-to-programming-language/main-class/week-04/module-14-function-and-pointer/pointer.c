#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;

    // printf("%p\n", ptr);
    // dereference
    // printf("%d\n", *ptr);

    *ptr = 500;
    printf("%d\n", x);
    return 0;
}