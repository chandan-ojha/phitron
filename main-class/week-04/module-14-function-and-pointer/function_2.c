
#include <stdio.h>

int sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int result = x + y;
    return result;
}

int main()
{
    int s = sum();

    printf("%d\n", s);

    return 0;
}