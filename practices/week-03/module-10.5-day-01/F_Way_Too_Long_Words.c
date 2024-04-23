#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[101];
        scanf("%s", str);
        int strl = strlen(str);

        if (strl > 10)
        {
            int strlm = strl - 2;
            printf("%c%d%c\n", str[0], strlm, str[strl - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }

    return 0;
}