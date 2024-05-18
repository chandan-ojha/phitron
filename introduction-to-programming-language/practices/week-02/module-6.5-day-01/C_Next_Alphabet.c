#include <stdio.h>
int main()
{
    char x;
    int ans;
    scanf("%c", &x);
    if (x == 'z')
    {
        ans = x - 25;
    }
    else
    {
        ans = x + 1;
    }
    printf("%c", ans);
    return 0;
}