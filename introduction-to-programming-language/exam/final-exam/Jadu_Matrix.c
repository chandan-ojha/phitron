#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int jaduMatrix = 1;

    if (row != col)
    {
        jaduMatrix = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    jaduMatrix = 0;
                }
            }
            else if (i + j == row - 1)
            {
                if (a[i][j] != 1)
                {
                    jaduMatrix = 0;
                }
            }
            else if (a[i][j] != 0)
            {
                jaduMatrix = 0;
            }
        }
    }

    if (jaduMatrix == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}