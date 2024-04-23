#include <stdio.h>
#include <string.h>
int main()
{
    /*char a[8];
    scanf("%s", &a);

    printf("%s\n", a);*/

    // String Input with Spaces  gets();
    /*char a[13];
    gets(a);
    printf("%s", a);*/

    // String Input with Spaces  fgets();
    char a[13];
    fgets(a, 13, stdin);
    printf("%s", a);

    return 0;
}