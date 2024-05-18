#include <stdio.h>
int main()
{
    char ch;
    int count[26] = {0};

    while (scanf("%c", &ch) != EOF)
    {
        count[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] > 0)
        {
            printf("%c - %d\n", i, count[i - 'a']);
        }
    }

    return 0;
}