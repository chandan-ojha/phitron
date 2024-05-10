#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int product_abc = a * b * c;

        if (product_abc == 0 || m % product_abc != 0)
        {
            printf("-1\n");
        }
        else
        {
            long long int missing_number = m / product_abc;
            printf("%lld\n", missing_number);
        }
    }

    return 0;
}