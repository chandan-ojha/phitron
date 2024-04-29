#include <stdio.h>

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = x + y;
    printf("%d\n", result);
}

int main()
{
    sum();
    sum();
    return 0;
}