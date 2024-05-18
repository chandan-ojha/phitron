#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int total_farmers = m1 + m2;
        int original_work = d * m1;
        int number_of_days = (original_work / total_farmers);
        int dif = d - number_of_days;
        printf("%d\n", dif);
    }
    return 0;
}