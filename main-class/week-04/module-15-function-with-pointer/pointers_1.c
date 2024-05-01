#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;

    // printf("Memory address of x - %p\n", &x);
    // printf("Value of ptr - %p\n", ptr);
    // printf("Memory address of ptr - %p\n", &ptr);
    // printf("Memory size of ptr - %d\n", sizeof(ptr));

    // Dereferencing

    // x = 200;
    *ptr = 200;

    printf("Value of x - %d\n", x);
    printf("Value of ptr - %d\n", *ptr);

    return 0;
}