#include <stdio.h>

int main(void)
{
    int cnt = 0;
    double a = 99.0, sum = 0;
    double ary[100] = {0, 0};
    double avg=0;
    int i = 0;

    while (1)
    {
        scanf("%lf", &a);
        if(a==0) break;
        cnt++;
        ary[i] = a;
        i++;
        sum += a;
    }
    avg = sum / cnt;

    printf("%.1f\n", avg);

    for (int j = 0; j < cnt; j++)
    {
        if (avg >= ary[j])
        {
            printf("%.1lf ", ary[j]);
        }
    }

    return 0;
}