#include <stdio.h>
void print_digits(int n)
{
    if (n == 0)
    {
        return;
    }
    int digits = n % 10;
    print_digits(n / 10);
    printf("%d ", digits);
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        print_digits(n);

        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}