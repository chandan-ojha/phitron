#include <stdio.h>
#include <string.h>
int main()
{
    /*char ch[7];
    fgets(ch, sizeof(ch) / sizeof(char), stdin);

    printf("%s\n", ch);
    printf("length = %d", strlen(ch));*/

    /*problems*/

    /*
      problem-01) Write down a program to print the bellow programm.

      Sample Input:
      5
      shift
      5
      right

      Sample Output:
      shift right

      problem-02) Write down a program to print the bellow programm.

      Sample Input:
      2
      5
      shift
      5
      right

      Sample Output:
      shift right

    */

    // problem-01 solved
    int a, b;

    scanf("%d", &a);
    char ch1[a + 1];
    // scanf("%s", ch1);
    getchar();
    fgets(ch1, sizeof(ch1) / sizeof(char), stdin);

    scanf("%d", &b);
    getchar();
    char ch2[b + 1];
    // scanf("%s", ch2);
    fgets(ch2, sizeof(ch2) / sizeof(char), stdin);

    printf("%s %s", ch1, ch2);
    return 0;
}