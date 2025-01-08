#include <stdio.h>

int GCD(int a, int b);

int main(void)
{
    int a, b;

    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        printf("%d\n", GCD(a, b));
    }
    return 0;
}

int GCD(int a, int b)
{
    int max_ys;
    for (int i = 2; i < 100; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            max_ys = i;
        }
    }
    return max_ys;
}