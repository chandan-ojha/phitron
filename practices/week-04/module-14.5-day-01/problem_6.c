#include <stdio.h>

char con_alp(char alp)
{
    char con;

    if (alp >= 'A' && alp <= 'Z')
    {
        con = alp + 32;
    }
    else if (alp >= 'a' && alp <= 'z')
    {
        con = alp - 32;
    }

    return con;
}

int main()
{
    char alp;
    scanf("%c", &alp);

    char result = con_alp(alp);

    printf("%c\n", result);

    return 0;
}