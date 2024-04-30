#include <stdio.h>

int extract_sum(int n)
{
    int firstNum = n / 1000;
    int lastNum = n % 10;
    return firstNum + lastNum;
}
int main()
{
    int num;
    scanf("%d", &num);
    int result = extract_sum(num);
    printf("%d", result);
    return 0;
}