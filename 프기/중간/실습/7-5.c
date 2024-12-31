#include <stdio.h>
#include <limits.h>

int main(void){
    int a=1;
    int ary[100] = {0, 0};
    int i = 0;
    int temp = 0, cnt = 0;
    int MAX=ary[0];
    int MIN=INT_MAX;

    while (1)
    {
        scanf("%d", &a);
        if(a==0) break;
        ary[i] = a;
        i++;
        cnt++;
    }

    for(int i=0;i<cnt;i++){
        if(MAX<ary[i]) MAX=ary[i];

        if(MIN>ary[i]) MIN=ary[i];
    }
    printf("%d %d",MAX,MIN);

    return 0;
}