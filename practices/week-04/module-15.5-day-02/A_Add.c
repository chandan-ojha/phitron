#include <stdio.h>

void add_numbers(int x, int y)
{
    int result = x + y;
    printf("%d\n", result);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    add_numbers(x, y);

    return 0;
}