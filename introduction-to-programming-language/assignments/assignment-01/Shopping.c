#include <stdio.h>

int main()
{
    int money, remaining;

    scanf("%d", &money);

    if (money > 1000)
    {
        printf("I will buy Punjabi\n");

        remaining = money - 1000;

        if (remaining >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}
