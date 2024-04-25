#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char str[10001];
        scanf("%s", str);

        int capital = 0, small = 0, digit = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                capital++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                small++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
