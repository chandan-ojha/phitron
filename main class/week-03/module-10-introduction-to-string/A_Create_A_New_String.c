#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);

    int sl = strlen(s);
    int tl = strlen(t);

    printf("%d %d\n", sl, tl);
    printf("%s %s", s, t);

    return 0;
}