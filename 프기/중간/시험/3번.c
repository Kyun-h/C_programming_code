#include <stdio.h>
#include <limits.h>

int main(void){
    int n,m,MIN=0;
    scanf("%d %d",&n,&m);

    for(int i=1;i<INT_MAX; i++){
        if(i%n==0 && i%m==0){
            MIN=i;
            break;
        }
    }
    printf("%d",MIN);

    return 0;
}