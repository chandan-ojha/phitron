#include <stdio.h>
int main()
{
    char a[100001];
    fgets(a, 100001, stdin);

    int i = 0;

    while (a[i] != '\\')
    {
        printf("%c", a[i]);
        i++;
    }
    return 0;
}