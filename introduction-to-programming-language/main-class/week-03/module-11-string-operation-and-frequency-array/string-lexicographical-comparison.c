#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    /*manual*/

    /*int i = 0;

    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller\n");
            break;
        }
        else
        {
            printf("B is smaller\n");
            break;
        }
    }*/

    /*built-in*/

    int v = strcmp(a, b);

    // printf("%d\n", v);

    if (v < 0)
    {
        printf("A is smaller\n");
    }
    else if (v > 0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("Same\n");
    }

    return 0;
}