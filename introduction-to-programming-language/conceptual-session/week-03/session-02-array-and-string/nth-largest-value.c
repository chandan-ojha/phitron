#include <stdio.h>
int main()
{
    int asz;
    scanf("%d", &asz);

    int inpa[asz];

    for (int i = 0; i < asz; i++)
    {
        scanf("%d", &inpa[i]);
    }

    int n;
    scanf("%d", &n);

    int lan = inpa[0];

    for (int i = 0; i < asz; i++)
    {
        if (inpa[i] > lan)
        {
            lan = inpa[i];
        }
    }

    int fqa[lan + 1];

    for (int i = 0; i <= lan; i++)
    {
        fqa[i] = 0;
    }

    for (int i = 0; i < asz; i++)
    {
        fqa[inpa[i]] = 1;
    }

    int count = 0;

    for (int i = lan; i >= 0; i--)
    {
        if (fqa[i] == 1)
        {
            count++;
        }
        if (count == n)
        {
            printf("%d no largest number = %d", n, i);
            break;
        }
    }

    return 0;
}