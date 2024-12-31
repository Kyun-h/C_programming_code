#include <stdio.h>
int main(void){
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
    
    return 0;
}