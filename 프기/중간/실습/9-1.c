#include <stdio.h>

int max(int a, int b, int c);
int middle(int a, int b, int c);
int min(int a, int b, int c);

int main(void)
{
    int a, b, c;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        printf("%d %d %d\n", max(a, b, c), min(a, b, c), middle(a, b, c));
    }

    return 0;
}

int max(int a, int b, int c)
{
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    return max;
}

int middle(int a, int b, int c)
{
    int acnt=0,bcnt=0,ccnt=0;
    int middle;
    if (a>b) acnt++;
    if (a>c) acnt++;
    if (b>a) bcnt++;
    if (b>c) bcnt++;
    if (c>b) ccnt++;
    if (c>a) ccnt++;

    if(acnt==1) middle=a;
    else if(bcnt==1) middle=b;
    else middle=c;

    return middle;
}

int min(int a, int b, int c)
{
    int min;
    if (a< b && a<c)
        min = a;

    if (b< c && b<a)
        min = b;

    if (c< b && c<a)
        min = c;
    return min;
}
