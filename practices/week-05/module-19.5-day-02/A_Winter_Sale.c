#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);

    float price_before_discount = p * (100.0 / (100 - x));

    printf("%0.2f", price_before_discount);

    return 0;
}