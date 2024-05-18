#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i = 0, j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
            break;
        }

        i++;
        j--;
    }

    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int isPalindrome = is_palindrome(str);

    if (isPalindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}