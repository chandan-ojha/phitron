#include <stdio.h>

int main()
{
    char str[100001];
    int consonantCount = 0;
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
        {
            consonantCount++;
        }
        i++;
    }

    printf("%d\n", consonantCount);

    return 0;
}
