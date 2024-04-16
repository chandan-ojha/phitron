#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 10 || n > 99)
    {
        printf("NO\n");
    }
    else
    {
        int quotient = n % 10;
        int remainder = n / 10;

        if ((quotient != 0 && remainder % quotient == 0) || (remainder != 0 && quotient % remainder == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
