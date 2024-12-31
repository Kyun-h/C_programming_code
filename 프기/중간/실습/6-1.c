#include <stdio.h>

int main(void)
{
    int a, cnt = 0;
    double sum = 0.0;

    while (1)
    {
        scanf("%d", &a);

        if (a >= 0)
        {
            cnt++;
            sum += a;
        }
        else if(a<0)
        {
            printf("%.2lf", (double)sum / cnt);
            break;
        }

    }
    return 0;
}