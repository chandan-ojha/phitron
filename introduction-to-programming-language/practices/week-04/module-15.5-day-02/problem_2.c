#include <stdio.h>

int my_len(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char str[10];
    scanf("%s", str);

    printf("%d", my_len(str));

    return 0;
}