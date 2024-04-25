#include <stdio.h>
int main()
{
    char ch;
    int fqa[26] = {0};

    while (scanf("%c", &ch) != EOF)
    {
        int ci = ch - 97;
        fqa[ci] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fqa[i] > 0)
        {
            printf("%c : %d\n", i + 97, fqa[i]);
        }
    }

    return 0;
}