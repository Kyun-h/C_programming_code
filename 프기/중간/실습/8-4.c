#include <stdio.h>

void sumMultiple(int start, int end, int n, int m, int sums[6]);

int main(void)
{
    int start, end, n, m;
    int sums[6] = {0}; // 각 합계를 저장할 배열

    scanf("%d %d %d %d", &start, &end, &n, &m);

    sumMultiple(start, end, n, m, sums);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", sums[i]);
    }

    return 0;
}

void sumMultiple(int start, int end, int n, int m, int sums[6])
{
    int sum = 0;

    for (int i = start; i < end; i++)
    {
        if (i % n == 0)
            sums[0] += i;
    }

    for (int i = start; i < end; i++)
    {
        if (i % m == 0)
            sums[1] += i;
    }
    
    for (int i = start; i < end; i++)
    {
        if (i % n == 0 && i % m == 0)
            sums[2] += i;
    }

    for (int i = start; i < end; i++)
    {
        if (i % n == 0 || i % m == 0)
            sums[3] += i;
    }

    for (int i = start; i < end; i++)
    {
        if (i % n != 0 && i % m == 0)
            sums[4] += i;
    }

    for (int i = start; i < end; i++)
    {
        if (i % n != 0 && i % m != 0)
            sums[5] += i;
    }
}