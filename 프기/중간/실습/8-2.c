#include <stdio.h>
void printStar(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printStar(n);

    return 0;
}
void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int m = 0; m < 2 * i + 1; m++)
            printf("*");

        puts("");
    }
}