#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[60], t[60];
        scanf("%s %s", s, t);

        int slen = strlen(s);
        int tlen = strlen(t);

        int mxlen;

        if (slen >= tlen)
        {
            mxlen = slen;
        }
        else
        {
            mxlen = tlen;
        }

        for (int i = 0; i < mxlen; i++)
        {
            if (i < slen)
            {
                printf("%c", s[i]);
            }
            if (i < tlen)
            {
                printf("%c", t[i]);
            }
        }

        printf("\n");
    }

    return 0;
}