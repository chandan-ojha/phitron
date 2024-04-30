#include <stdio.h>

char capital_to_small(char capital_al)
{
    char con = capital_al + 32;

    return con;
}

int main()
{
    char capital_al;
    scanf("%c", &capital_al);

    char result = capital_to_small(capital_al);

    printf("%c\n", result);

    return 0;
}