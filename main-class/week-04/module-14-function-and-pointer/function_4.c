#include <stdio.h>

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = x + y;
    printf("%d", result);
}

int main()
{
    sum();
    return 0;
}