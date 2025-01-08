#include <stdio.h>
#include <limits.h>

int lcm(int x, int y);
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", lcm(x, y));

    return 0;
}

int lcm(int x, int y)
{
    int MIN =0, ary1[100] = {0, 0}, ary2[100] = {0, 0};

    for(int i=1; i<INT_MAX;i++){
        if(i%x==0 && i%y==0) return i;
    }
    
}
