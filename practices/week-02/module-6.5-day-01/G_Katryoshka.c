#include <stdio.h>

int main()
{
    long long int eyes, mouth, body;

    scanf("%lld %lld %lld", &eyes, &mouth, &body);

    long long int min = 0;

    if (eyes < mouth && eyes < body)
    {
        min = eyes;
    }
    else if (mouth < eyes && mouth < body)
    {
        min = mouth;
    }
    else
    {
        min = body;
    }

    long long int newEyes = (eyes - min) / 2;
    long long int newMouth = mouth - min;
    long long int newBody = body - min;

    if (newEyes <= newBody)
    {
        printf("%lld\n", min + newEyes);
    }
    else
    {
        printf("%lld\n", min + newBody);
    }
}