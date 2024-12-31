#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, sum=0;

    while(1){
        scanf("%d", &a);
        if (a < 0) printf("wrong\n");
        else break;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d\n", (int)pow(2, i));
        sum += pow(2, i);
    }
    printf("=%d",sum);

    return 0;
}