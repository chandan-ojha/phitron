#include <stdio.h>
void fun(int i)
{
    if (i == 6) // base case
    {
        return;
    }
    fun(i + 1); // 5 4 3 2
    printf("%d\n", i);
}
int main()
{
    fun(1);
    return 0;
}