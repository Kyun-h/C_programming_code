#include <stdio.h>

int main(void){
    double n;
    scanf("%lf",&n);

    printf("%d %.2lf",(int)n,n-(int)n);
    return 0;
}