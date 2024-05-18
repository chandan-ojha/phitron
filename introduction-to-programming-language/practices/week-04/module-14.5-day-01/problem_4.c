#include <stdio.h>

char small_to_capital(char small_al)
{
    char con = small_al - 32;

    return con;
}

int main()
{
    char small_al;
    scanf("%c", &small_al);

    char result = small_to_capital(small_al);

    printf("%c\n", result);

    return 0;
}