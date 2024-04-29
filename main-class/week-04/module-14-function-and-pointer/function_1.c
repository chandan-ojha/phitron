#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    printf("%d\n", sum(5, 7));
    printf("%d\n", sum(10, 7));
    return 0;
}