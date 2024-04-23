#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);

    int i = 0, j = strlen(str) - 1;

    int isPalindrome = 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}