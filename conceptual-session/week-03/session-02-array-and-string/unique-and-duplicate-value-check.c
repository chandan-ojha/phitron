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
        fqa[inpa[i]] += 1;
    }

    int dupc = 0;
    int unic = 0;

    for (int i = 0; i <= lan; i++)
    {
        if (fqa[i] > 1)
        {
            dupc++;
        }
        if (fqa[i] == 1)
        {
            unic++;
        }
    }

    int dupv[dupc];
    int univ[unic];

    int dupi = 0;
    int unii = 0;

    for (int i = 0; i <= lan; i++)
    {
        if (fqa[i] > 1)
        {
            dupv[dupi++] = i;
        }
        if (fqa[i] == 1)
        {
            univ[unii++] = i;
        }
    }

    printf("Total duplicate number is = %d\n", dupc);
    printf("Duplicate numbers are:\n");

    for (int i = 0; i < dupc; i++)
    {
        printf("%d\n", dupv[i]);
    }

    printf("Total Unique number is = %d\n", unic);
    printf("Unique numbers are:\n");

    for (int i = 0; i < unic; i++)
    {
        printf("%d\n", univ[i]);
    }

    return 0;
}