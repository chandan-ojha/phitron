#include <stdio.h>
// global
int x = 500;

void fun(void)
{
    int s = 100;
    printf("fun s Adress: %p\n", &s);
}

int main()
{
    int s = 200;
    printf("Main s Adress: %p\n", &s);
    fun();
    printf("%d\n", x);

    return 0;
}