// ¹Ý¿Ã¸² : round()

#include <stdio.h>

int main(void)
{
    int C, ans, cnt=1;
    double F;

    scanf("%d", &C);
    F = ((double)(9*C) / 5) + 32.0;
    F = round(F);

    while (1)
    {
        scanf("%d", &ans);
        if (ans > F)
        {
            printf("large\n");
            cnt++;
        }
        else if (ans < F)
        {
            printf("small\n");
            cnt++;
        }
        else if(ans==F)
        {
            printf("correct %d\n", cnt);
            break;
        }
    }

    return 0;
}
