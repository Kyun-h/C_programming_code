#include <stdio.h>
void printless(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printless(n);

    return 0;
}

void printless(int n)
{
    if (n <= 0)
        return;

    printless(n - 1);
    printf("%d", n);
    printless(n - 1);
}