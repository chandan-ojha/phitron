#include <stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 100.50;

    printf("Value of x - %0.2lf\n", x);
    printf("Value of ptr - %0.2lf\n", *ptr);
    printf("Value of ptr2 - %0.2lf\n", *ptr2);
    printf("Memory size of ptr - %d byte\n ", sizeof(ptr));

    return 0;
}