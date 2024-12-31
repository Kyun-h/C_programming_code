#include <stdio.h>
int main(void)
{
    int a;
    int ary[100] = {0, 0};
    int i = 0;
    int temp = 0, cnt = 0;
    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
            break;
        ary[i] = a;
        i++;
        cnt++;
    }

    for (int m = 0; m < 999; m++)
    {
        for (int j = 0; j < cnt-1; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }

    for (int k = 0; k < cnt; k++)
        printf("%d ", ary[k]);

    return 0;
}