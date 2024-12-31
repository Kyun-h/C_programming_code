#include <stdio.h>

int main(void)
{
    int a, b;
    char buho;

    while (buho != '!')
    {
        scanf("%d%c%d", &a, &buho, &b);

        if (a == 0 && b == 0)
            break;

        if (buho == '+')
        {
            printf("%d+%d=%d\n", a, b, a + b);
        }
        else if (buho == '-')
        {
            printf("%d-%d=%d\n", a, b, a - b);
        }
        else if (buho == '*')
        {
            printf("%d*%d=%d\n", a, b, a * b);
        }
        else if (buho == '/')
        {
            if (b == 0)
            {
                printf("Error\n");
            }
            else
            {
                printf("%d/%d=%.2lf\n", a, b, (double)a / b);
            }
        }
    }

    return 0;
}