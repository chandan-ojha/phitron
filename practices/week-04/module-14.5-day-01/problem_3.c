#include <stdio.h>

int char_to_ascii(char c)
{
    return c;
}

int main()
{
    char c;
    scanf("%c", &c);

    int result = char_to_ascii(c);

    printf("%d\n", result);

    return 0;
}