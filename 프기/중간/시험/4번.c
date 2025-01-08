#include <stdio.h>

int main(void){
    int start,end,n;
    scanf("%d %d %d",&n,&start,&end);
    for(int i=start;i<=end;i++){
        printf("%d ",n*i);
    }

    return 0;
}