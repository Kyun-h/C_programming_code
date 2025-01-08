#include <stdio.h>
#include <limits.h>

int gcd(int a, int b);
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));

    return 0;
}

int gcd(int a, int b)
{

    int gyd;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if(a%i==0 && b%i==0) gyd=i;
    }
    return gyd;
}